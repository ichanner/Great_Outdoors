using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TGOV.Components.Physics;

namespace TGOV
{
	namespace Controllers
	{
		public class PlayerController : MonoBehaviour
		{
			Transform playerRig;
			Rigidbody playerRigidBody;
			Movement movement;

			public PlayerController(Transform playerRig, Rigidbody playerRigidBody, Movement movement)
			{
				this.playerRigidBody = playerRigidBody;
				this.playerRig = playerRig;
				this.movement = movement;
			}

			public void Jump(float jumpHeight, bool grounded)
			{
				if (grounded)
				{
					playerRigidBody.AddForce(Vector3.up * jumpHeight);
				}
			}

			public void Move(Vector3 axis, Transform point)
			{

				Vector3 dir = point.TransformDirection(new Vector3(axis.x, 0.0f, axis.y));

				if (axis.x != 0 || axis.y != 0)
				{
					movement.move(dir);
				}
				
			}

			public void RotateLeft(float rotationSnap, Transform point)
			{
				playerRig.transform.RotateAround(point.position, Vector3.up, rotationSnap);
			}

			public void RotateRight(float rotationSnap, Transform point)
			{
				playerRig.transform.RotateAround(point.position, Vector3.up, -rotationSnap);
			}

			public void updateController()
			{
				movement.update();
			}


		}

	}
}