using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TGOV.Controllers;
using Photon.Pun;
using Photon;
using Valve.VR;
using TGOV.Managers;

namespace TGOV
{
	namespace Entities
	{
		public class Player : Entity, IPunObservable
		{

			private Rigidbody rigidBody;
			private PhotonView view;

			private InterpolationController interpolationController;

			//Controllers

			private PlayerController playerController;

			/// Player Parts

			public GameObject playerHead;
			public GameObject playerBody;
			public GameObject playerRig;
			public GameObject playerFeet;
			public GameObject playerHandRight;
			public GameObject playerHandLeft;

			private void initBodyParts()
			{
				playerRig = GameObject.Find("[CameraRig]");
				playerHead = GameObject.Find("Camera");
				playerBody = GameObject.Find("Body");
				playerFeet = GameObject.Find("Feet");
				playerHandRight = GameObject.Find("Controller (right)");
				playerHandLeft = GameObject.Find("Controller (left)");
			}

			private void initComponents()
			{
				if (isLocal())
				{
					this.createMovementComponent(2.4f, 2.5f, 5, 2.0f);
				}
			}

			private void initControllers()
			{
				if (isLocal())
				{
					playerController = new PlayerController(this.getTransform(), rigidBody, getMovementComponent());
				}
				else
				{
					interpolationController = new InterpolationController(this.getTransform());
				}
			}

			public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
			{

			}

			private void subscribeToInputs()
			{
				if (isLocal()){

					InputManager.instance.playerJumpEvent += handleJump;
					InputManager.instance.playerLocomotionEvent += handleLocomotion;
					InputManager.instance.playerTurnLeftEvent += handleTurnLeft;
					InputManager.instance.playerTurnRightEvent += handleTurnRight;
				}
			}

			private void initNetwork()
			{
				PhotonNetwork.SendRate = 60;
				PhotonNetwork.SerializationRate = 30;

				if (view) view.ObservedComponents.Add(this);
			}

			void Awake()
			{
				rigidBody = GetComponent<Rigidbody>();
				view = GetComponent<PhotonView>();
			}

			void Start()
			{
				
				initEntity(gameObject);
				initNetwork();
				initBodyParts();
				initComponents();
				subscribeToInputs();
				initControllers();

				
			}

			/*
			public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
			{
				if (stream.IsWriting == true)
				{
					stream.SendNext(getTransform());
					stream.SendNext(getTransform());	
				}
				
				else
				{
					interpolationController.targetPosition = (Vector3)stream.ReceiveNext();
					interpolationController.targetRotation = (Quaternion)stream.ReceiveNext();

					if (!isLocal())
					{
						interpolationController.smoothMove();
					}
				}
				
		}*/

		void FixedUpdate()
			{
				if (isLocal())
				{
					this.playerController.updateController();
				}
			}

			private bool isGrounded()
			{
				RaycastHit hit;

				if (isLocal() && Physics.Raycast(this.playerBody.transform.position, Vector3.down, out hit, playerHead.transform.localPosition.y + 0.1f))
				{
					return true;
				}

				return false;
			}

			public bool isLocal()
			{
				return view.IsMine ? true : false;
			}

			public int getId()
			{
				return view.ViewID;
			}

			[PunRPC]
			public void RPC_SpawnPlayer()
			{
				PlayerManager.instance.addPlayer(getId(), PhotonView.Find(getId()).gameObject);
			}

			[PunRPC]
			public void RPC_PickUpObject(int id)
			{
				PhotonView.Find(id).gameObject.GetComponent<Rigidbody>().isKinematic = true;
			}

			[PunRPC]
			public void RPC_DropObject(int id)
			{
				PhotonView.Find(id).gameObject.GetComponent<Rigidbody>().isKinematic = false;
			}


			///Movement Callbacks

			private void handleTurnLeft()
			{
				playerController.RotateLeft(45, playerHead.transform);
			}

			private void handleTurnRight()
			{
				playerController.RotateRight(45, playerHead.transform);
			}

			private void handleJump()
			{
				playerController.Jump(800, isGrounded());
			}

			private void handleLocomotion(Vector2 axis)
			{
				playerController.Move(axis, playerHead.transform);
			}
		}
	}
}