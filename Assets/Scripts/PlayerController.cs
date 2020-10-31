using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using TGOV.Components.TGOVPhysics;

namespace TGOV
{
	namespace Controllers
	{
		enum MovementStates
		{
			Idle,
			Walk,
			TurnLeft,
			TurnRight,
			Jump,
			Climb
		}

		public class PlayerController : MonoBehaviour
		{

			private Transform player;
			private Rigidbody playerRigidBody;
			private Movement movement;
			private CoolDown jumpCoolDown;

			public int state { get; set; }

			public PlayerController(Transform player, Rigidbody playerRigidBody, Movement movement)
			{
				this.playerRigidBody = playerRigidBody;
				this.player = player;
				this.movement = movement;
				this.jumpCoolDown = new CoolDown(1f);
			}

			public void Jump(float jumpHeight, bool grounded)
			{
				if (grounded && jumpCoolDown.isExpired())
				{
					state = (int)MovementStates.Jump;
					playerRigidBody.AddForce(Vector3.up * jumpHeight);
				}
			}

			public void Move(Vector3 axis, Transform point)
			{
				if (state == (int)MovementStates.Climb)
					return;
				
				Vector3 dir = point.TransformDirection(new Vector3(axis.x, 0.0f, axis.y));
		
				if (Math.Abs(axis.x) > 0 || Math.Abs(axis.y) > 0)
				{
					state = (int)MovementStates.Walk;
					movement.move(dir);
				}
			}

			public void RotateLeft(float rotationSnap, Transform point)
			{
				if (state == (int)MovementStates.Climb)
					return;

				state = (int)MovementStates.TurnLeft;
				player.transform.RotateAround(point.position, Vector3.up, rotationSnap);
			}

			public void RotateRight(float rotationSnap, Transform point)
			{
				if (state == (int)MovementStates.Climb)
					return;

				state = (int)MovementStates.TurnRight;
				player.transform.RotateAround(point.position, Vector3.up, -rotationSnap);
			}

			public void Climb(PlayerHand hand)
			{
				state = (int)MovementStates.Climb;

				player.GetComponent<Rigidbody>().isKinematic = true;

				player.transform.position += player.transform.rotation * -hand.pose.GetVelocity() * Time.deltaTime;

				//rigidbody.AddForce(-hand.pose.GetVelocity() * 2);
			}

			public void updateController()
			{
				jumpCoolDown.update();
				movement.update();
			}

		}

	}
}