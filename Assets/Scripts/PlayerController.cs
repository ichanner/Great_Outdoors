using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using TGOV.Components.Physics;

namespace TGOV
{
	namespace Controllers
	{
		public class PlayerController : MonoBehaviour
		{
			private Transform player;
			private Rigidbody playerRigidBody;
			private Movement movement;
			private CoolDown jumpCoolDown;

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
					playerRigidBody.AddForce(Vector3.up * jumpHeight);
				}
			}

			public void Move(Vector3 axis, Transform point)
			{
				Vector3 dir = point.TransformDirection(new Vector3(axis.x, 0.0f, axis.y));
		
				if (Math.Abs(axis.x) > 0 || Math.Abs(axis.y) > 0)
				{
					movement.move(dir);
				}
			}

			public void RotateLeft(float rotationSnap, Transform point)
			{
				player.transform.RotateAround(point.position, Vector3.up, rotationSnap);
			}

			public void RotateRight(float rotationSnap, Transform point)
			{
				player.transform.RotateAround(point.position, Vector3.up, -rotationSnap);
			}

			public void updateController()
			{
				jumpCoolDown.update();
				movement.update();
			}

		}

	}
}