using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TGOV.Components;
using TGOV.Components.TGOVPhysics;
using Photon.Pun;

namespace TGOV.Entities
{
	public class Entity : MonoBehaviourPun
	{
		private GameObject entity;
		private Movement movementComponent;
		private string entityId;

		public Entity()
		{	
		}

		public void initEntity(GameObject entity)
		{
			this.entity = entity;
		}

		public void createMovementComponent(float acceleration, float deceleration, float maxVelocity, float initialVelocity = 0.0f)
		{
			movementComponent = new Movement(entity.transform, acceleration, deceleration, maxVelocity, initialVelocity);
		}

		public Transform getTransform()
		{
			return entity.transform;
		}

		public GameObject getEntity()
		{
			return entity;
		}

		public string getEntityId()
		{
			return entityId;
		}

		public void setEntityId(string entityId)
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