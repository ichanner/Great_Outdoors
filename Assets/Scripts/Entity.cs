using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TGOV.Components;
using TGOV.Components.Physics;

namespace TGOV.Entities
{
	public class Entity : MonoBehaviour
	{
		private GameObject entity;
		private Movement movementComponent;
		private uint entityId;

		public Entity(/*GameObject entity*/)
		{
			//this.entity = entity;
		}

		public void initialize(GameObject entity)
		{
			this.entity = entity;
		}

		public void createMovementComponent(float acceleration, float deceleration, float maxVelocity)
		{
			movementComponent = new Movement(entity.transform, acceleration, deceleration, maxVelocity);
		}

		public Transform getTransform()
		{
			return entity.transform;
		}

		public GameObject getEntity()
		{
			return entity;
		}

		public  uint getEntityId()
		{
			return entityId;
		}

		public void setEntityId(uint entityId)
		{
			this.entityId = entityId;
		}

		public Movement getMovementComponent()
		{
			return movementComponent;
		}

		public float getVelocity()
		{
			return movementComponent.getVelocity();
		}
	}
}