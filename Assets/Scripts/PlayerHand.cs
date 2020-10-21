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
		public Interactable hovering = null;

		private Interactable holding = null;
		private Interactable climbing = null;

		private SteamVR_Behaviour_Pose pose;
		private Dictionary<int, Interactable> interactablesInRange = new Dictionary<int, Interactable>();
		private Dictionary<int, Interactable> climbablesInRange = new Dictionary<int, Interactable>();

		[SerializeField] public PhotonView view;

		private void subscribeToInputs()
		{

			if (pose.inputSource == SteamVR_Input_Sources.RightHand)
			{
				Managers.InputManager.instance.playerRightPickupEvent += PickUp;
				Managers.InputManager.instance.playerRightDropEvent += Drop;
				Managers.InputManager.instance.playerRightLockEvent += Lock;
			}

			else if (pose.inputSource == SteamVR_Input_Sources.LeftHand)
			{
				Managers.InputManager.instance.playerLeftPickupEvent += PickUp;
				Managers.InputManager.instance.playerLeftDropEvent += Drop;
				Managers.InputManager.instance.playerLeftLockEvent += Lock;
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
			hovering = getClosestObject(interactablesInRange);
		}

		private void OnTriggerEnter(Collider other)
		{
			
			if (other.gameObject.CompareTag("Interactable"))
				interactablesInRange.Add(other.gameObject.GetComponent<PhotonView>().ViewID, other.gameObject.GetComponent<Interactable>());
			
		}

		private void OnTriggerExit(Collider other)
		{

			if (other.gameObject.CompareTag("Interactable"))
				interactablesInRange.Remove(other.gameObject.GetComponent<PhotonView>().ViewID);

		}


		public Dictionary<int, Interactable> getInteractablesInRange()
		{
			return interactablesInRange;
		}

		private float getDistanceFromObject() {

			return (holding.joint.position - transform.position).sqrMagnitude;
		}


		private void PickUp()
		{
			holding = getClosestObject(interactablesInRange);

			holding.onGrab();

			if (holding.locked || !holding)
				return;

			if (holding.activeHand && !holding.locked)
			{
				SwapHands();
			}

			if (getDistanceFromObject() <= holding.proximity)
			{
				holding.setPivot(transform.position);
			}

			GetComponent<Collider>().enabled = false;
			
			OutputManager.instance.Pulse(0, .1f, 10, 8, pose.inputSource);
			
			holding.transform.position = transform.position;
			holding.transform.SetParent(transform);

			view.RPC("RPC_PickUpObject", RpcTarget.AllBuffered, holding.view.ViewID);

			holding.activeHand = this;
		}




		private void Drop(bool freeGrab = false)
		{
			if (!holding.locked)
			{
				if (holding != null)
				{
					OutputManager.instance.Pulse(0, .1f, 10, 8, pose.inputSource);

					holding.onRelease();

					Throw(holding.GetComponent<Rigidbody>());

					holding.transform.parent = null;

					if (!freeGrab)
					{
						holding.resetPivot();
					}

					holding.activeHand = null;
					holding = null;
					
				}
			}
		}


		private void SwapHands()
		{
			holding.activeHand.Drop(true);

			if (getDistanceFromObject() <= holding.proximity && holding.freeGrab)
			{
				holding.setPivot(transform.position);
			}
			else
			{
				holding.resetPivot();
			}
		}


		private void Throw(Rigidbody rigidBody)
		{
			Transform handOrgin = pose.origin;

			view.RPC("RPC_DropObject", RpcTarget.AllBuffered, holding.view.ViewID);
			
			rigidBody.isKinematic = false;
			rigidBody.velocity = handOrgin.TransformVector(pose.GetVelocity());
			rigidBody.angularVelocity = handOrgin.TransformVector(pose.GetAngularVelocity());

			GetComponent<Collider>().enabled = true;
		}

		private void Lock()
		{
			
			if (holding.activeHand && holding.canLock)
			{
				OutputManager.instance.Pulse(0, .5f, 13, 11, pose.inputSource);

				if (holding.locked)
				{
					holding.locked = false;
					holding.activeHand.Drop();
				}
				else
				{
					holding.locked = true;
				}
			}
		}



		public Interactable getClosestObject(Dictionary<int, Interactable> list)
		{
			List<float> distances = new List<float>();
			
			foreach (var interactable in list)
			{
				var distance = (interactable.Value.transform.position - transform.position).sqrMagnitude;

				distances.Add(distance);

				float closest = distances.Min(z => z);

				if (distance == closest)
				{
					interactable.Value.hoveringHand = this;

					return interactable.Value.GetComponent<Interactable>();
				}

			}

			return null;
		}

	}
}

