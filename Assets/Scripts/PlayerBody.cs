using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace TGOV
{
	[RequireComponent(typeof(CapsuleCollider))]
	public class PlayerBody : MonoBehaviour
	{
		public Transform head;

		private CapsuleCollider capsuleCollider;

		void Awake()
		{
			capsuleCollider = GetComponent<CapsuleCollider>();
		}

		void FixedUpdate()
		{
			float distanceFromFloor = Vector3.Dot(head.localPosition, Vector3.up);
			capsuleCollider.height = Mathf.Max(capsuleCollider.radius, distanceFromFloor) * 2;
			transform.localPosition = head.localPosition - 0.5f * distanceFromFloor * Vector3.up;
		}
	}
}