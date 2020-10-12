using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TGOV.Controllers;
using Photon.Pun;
using Valve.VR;
using TGOV.Managers;

namespace TGOV
{
	namespace Entities
	{
		public class Player : Entity
		{

			private Rigidbody rigidBody;
			private PhotonView photonView;
	
			//Controllers

			private PlayerController playerController;

			/// Player Parts

			private GameObject playerHead;
			private GameObject playerBody;
			private GameObject playerRig;
			private GameObject playerFeet;
			private GameObject playerHandRight;
			private GameObject playerHandLeft;

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
				this.createMovementComponent(2.4f, 2.5f, 5, 2.0f);
			}

			private void initControllers()
			{
				playerController = new PlayerController(this.getTransform(), rigidBody, getMovementComponent());
			}

			private void subscribeToInputs()
			{
				InputManager.instance.playerJumpEvent += handleJump;
				InputManager.instance.playerLocomotionEvent += handleLocomotion;
				InputManager.instance.playerTurnLeftEvent += handleTurnLeft;
				InputManager.instance.playerTurnRightEvent += handleTurnRight;
			}

			void Awake()
			{
				rigidBody = GetComponent<Rigidbody>();
				photonView = GetComponent<PhotonView>();
			}

			void Start()
			{
				initBodyParts();
				initEntity(gameObject);
				
				if (isLocal())
				{
					initComponents();
					subscribeToInputs();
					initControllers();
				}	
			}

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
				return photonView.IsMine ? true : false;
			}

			public int getId()
			{
				return photonView.ViewID;
			}

			[PunRPC]
			public void RPC_SpawnPlayer()
			{
				PlayerManager.instance.addPlayer(getId(), PhotonView.Find(getId()).gameObject);
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
				playerController.Jump(400, isGrounded());
			}

			private void handleLocomotion(Vector2 axis)
			{
				playerController.Move(axis, playerHead.transform);
			}
		}
	}
}