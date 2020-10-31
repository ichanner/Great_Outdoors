using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Valve.VR;
using TGOV.Managers;
using System.Linq;
using TGOV.Components;
using TGOV.Entities;

namespace TGOV
{
	public class PlayerHand : Entity
	{
		[SerializeField] public PhotonView view;

		public SteamVR_Behaviour_Pose pose;

		public Interactable hovering = null;
		public Interactable holding = null;
		public Climable climbing = null;

		public Dictionary<int, Interactable> interactablesInRange = new Dictionary<int, Interactable>();
		public Dictionary<int, Climable> climbablesInRange = new Dictionary<int, Climable>();

		private GameObject inZone;

		private float fallCountDown;


		private void subscribeToInputs()
		{

			if (pose.inputSource == SteamVR_Input_Sources.RightHand)
			{
				InputManager.instance.playerRightPickupEvent += PickUp;
				InputManager.instance.playerRightClimbEvent += Climb;
				InputManager.instance.playerRightStopClimbEvent += StopClimb;
				InputManager.instance.playerRightDropEvent += Drop;
				InputManager.instance.playerRightLockEvent += Lock;
			}

			else if (pose.inputSource == SteamVR_Input_Sources.LeftHand)
			{
				InputManager.instance.playerLeftPickupEvent += PickUp;
				InputManager.instance.playerLeftClimbEvent += Climb;
				InputManager.instance.playerLeftStopClimbEvent += StopClimb;
				InputManager.instance.playerLeftDropEvent += Drop;
				InputManager.instance.playerLeftLockEvent += Lock;
			}
		}

		void Awake()
		{
			pose = GetComponent<SteamVR_Behaviour_Pose>();
		}

		void Start()
		{	
			if (view.IsMine)
			{
				subscribeToInputs();
			}
		}

		void FixedUpdate()
		{
			updateRay();
			updateFall();
		
		}

		private void updateRay()
		{
			List<float> distances = new List<float>();
			RaycastHit[] hits = Physics.BoxCastAll(transform.position, new Vector3(transform.localScale.x / 10, transform.localScale.y * 10, transform.localScale.z / 10), transform.forward, transform.rotation, 2f);

			inZone = null;

			foreach (var hit in hits)
			{
				if (hit.transform.gameObject.CompareTag("Interactable"))
				{
					GameObject hitObject = hit.transform.gameObject;

					var distance = (hit.transform.position - transform.position).sqrMagnitude;

					distances.Add(distance);

					float closest = distances.Min(z => z);

					if (distance == closest)
					{
						inZone = hitObject;

						if (view.IsMine && hitObject.GetComponent<Interactable>().activeHand == null && holding == null)
						{
							hitObject.GetComponent<Interactable>().GetComponent<Outline>().enabled = true;
						}
					}
				}
			}
		}


		void OnDrawGizmos()
		{
			Gizmos.DrawWireCube(transform.position + transform.forward * 5f, transform.localScale / 2);
		}
	

		private void updateFall()
		{
			if (climbing == null)
			{
				fallCountDown++;
			}

			if (fallCountDown >= 10f)
			{
				transform.parent.transform.parent.gameObject.GetComponent<Rigidbody>().isKinematic = false;
				fallCountDown = 0;
			}
		}

		private void OnTriggerEnter(Collider other)
		{

			if (other.gameObject.CompareTag("Climbable"))
				climbablesInRange.Add(other.gameObject.GetComponent<PhotonView>().ViewID, other.gameObject.GetComponent<Climable>());

			if (other.gameObject.CompareTag("Joint"))
				interactablesInRange.Add(other.gameObject.GetComponentInParent<PhotonView>().ViewID, other.gameObject.GetComponentInParent<Interactable>());

		}

		private void OnTriggerExit(Collider other)
		{
			if (other.gameObject.CompareTag("Climbable"))
				climbablesInRange.Remove(other.gameObject.GetComponent<PhotonView>().ViewID);

			if (other.gameObject.CompareTag("Joint"))
				interactablesInRange.Remove(other.gameObject.GetComponentInParent<PhotonView>().ViewID);

		}


		public void Climb()
		{
	
			climbing = getClosestClimbable();

			if (!climbing)
				return;

			fallCountDown = 0.0f;
			climbing.Climb(this);
		}

		public void StopClimb()
		{
			climbing.StopClimb();
			climbing = null;
		}

		private void PickUp()
		{
			holding = getClosestInteractable();

			if (!holding)
				return;

			holding.Pickup(this);
		}

		public void Drop()
		{
			if (!holding.activeHand)
				return;

			holding.Drop();
			holding = null;
		}

		public void Lock()
		{
			holding = getClosestInteractable();

			if (!holding)
				return;

			holding.Lock();

		}


		public void Adjust()
		{
			if (holding.activeHand)
				holding.activeHand.Drop();

			if (isTouchingInteractable() && holding.freeGrab)
				holding.setPivot(transform.position);
			
		}

		public void Throw(Rigidbody rigidBody)
		{
			Transform handOrgin = pose.origin;
	
			rigidBody.isKinematic = false;
			rigidBody.velocity = handOrgin.TransformVector(pose.GetVelocity());
			rigidBody.angularVelocity = handOrgin.TransformVector(pose.GetAngularVelocity());
		}



		public Interactable getClosestInteractable()
		{
			if (interactablesInRange.Count > 0)
			{
				List<float> distances = new List<float>();

				foreach (var interactable in interactablesInRange)
				{
					var distance = (interactable.Value.transform.position - transform.position).sqrMagnitude;

					distances.Add(distance);

					float closest = distances.Min(z => z);

					if (distance == closest)
					{
						return interactable.Value.GetComponent<Interactable>();
					}
				}
			}

			else if(interactablesInRange.Count == 0)
			{
				var farInteractable = inZone.GetComponent<Interactable>();

				if (farInteractable.activeHand == null)
				{
					return farInteractable;
				}

				else
				{
					if (isTouchingInteractable() && holding.freeGrab)
					{
						return farInteractable;
					}
				}

			}

			return null;

		}

		public Climable getClosestClimbable()
		{
			List<float> distances = new List<float>();

			foreach (var interactable in climbablesInRange)
			{
				var distance = (interactable.Value.transform.position - transform.position).sqrMagnitude;

				distances.Add(distance);

				float closest = distances.Min(z => z);

				if (distance == closest)
				{
					return interactable.Value.GetComponent<Climable>();
				}
				
			}

			return null;
		}

		private bool isTouchingInteractable()
		{
			if (holding.isTouchingRight && pose.inputSource == SteamVR_Input_Sources.RightHand)
				return true;
			
			if (holding.isTouchingLeft && pose.inputSource == SteamVR_Input_Sources.LeftHand)
				return true;
			
			return false;
		}

		private float getDistanceFromHolding()
		{
			return Vector3.Distance(holding.transform.position, transform.position);
		}

	}
}

