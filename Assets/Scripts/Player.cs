using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TGOV.Controllers;
using Photon.Pun;
using Valve.VR;

namespace TGOV
{
	namespace Entities
	{
		public class Player : Entity
		{

			private Rigidbody rigidBody;
			private PhotonView photonView;
			private Vector3 targetPos;
			private Quaternion targetRot;
		
			//Controllers

			private PlayerController playerController;

			/// Player Parts
		
			private GameObject playerHead;
			private GameObject playerRig;
			private GameObject playerBody;
			private GameObject playerFeet;
			private GameObject playerHandRight;
			private GameObject playerHandLeft;

		
			private void initValues()
			{
				rigidBody = GetComponent<Rigidbody>();
				photonView = GetComponent<PhotonView>();
				playerRig = GameObject.Find("[CameraRig]");
				playerHead = GameObject.Find("Camera");
				playerBody = GameObject.Find("Body");
				playerFeet = GameObject.Find("Feet");
				playerHandRight = GameObject.Find("Controller (right)");
				playerHandLeft = GameObject.Find("Controller (left)");
			}

			private void initComponents()
			{
				createMovementComponent(2, 1, 5);
			}

			private void initControllers()
			{
				playerController = new PlayerController(playerRig.transform, rigidBody, getMovementComponent());
			}

			private void subscribeToInputs()
			{
				Managers.InputManager.instance.playerJumpEvent += handleJump;
				Managers.InputManager.instance.playerLocomotionEvent += handleLocomotion;
				Managers.InputManager.instance.playerTurnLeftEvent += handleTurnLeft;
				Managers.InputManager.instance.playerTurnRightEvent += handleTurnRight;
			
			}


			void Start()
			{
				initValues();
				initialize(playerRig);
				initComponents();
				subscribeToInputs();
				initControllers();

			}

			void FixedUpdate()
			{
				this.playerController.updateController();
			}

		

			/*
			private void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
			{
				if (stream.IsWriting)
				{
					stream.SendNext(transform.position);
					stream.SendNext(transform.rotation);
				}
				else
				{
					targetPos = (Vector3)stream.ReceiveNext();
					targetRot = (Quaternion)stream.ReceiveNext();
				}
			}
			*/

			private bool isGrounded()
			{
				RaycastHit hit;

				if (Physics.Raycast(this.playerBody.transform.position, Vector3.down, out hit, playerHead.transform.localPosition.y + 0.1f))
				{
					return true;
				}

				return false;
			}

			public bool isLocal()
			{
				return photonView.IsMine ? true : false;
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