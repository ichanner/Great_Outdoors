using UnityEngine;


namespace TGOV
{

	namespace Components
	{

		namespace Physics
		{

			public class Movement : MonoBehaviour
			{

				private float velocity;
				private float deceleration;
				private float acceleration;
				private float maxVelocity;

				private Transform entity;

		
				public Movement(Transform entity, float acceleration, float deceleration, float maxVelocity)
				{
					this.velocity = 0.0f;
					this.deceleration = deceleration;
					this.acceleration = acceleration;
					this.maxVelocity = maxVelocity;
					this.entity = entity;
				}

				public float getVelocity()
				{
					return velocity;
				}

				public void setVelocity(float velocity)
				{
					this.velocity = velocity;
				}

				public float getMaxVelocity()
				{
					return maxVelocity;
				}

				public void stopVelocity()
				{
					velocity = 0.0f;
				}

				public void move(Vector3 direction)
				{
					if (velocity > maxVelocity)
					{
						velocity = maxVelocity;
					}

					velocity += acceleration * Time.deltaTime;

					entity.transform.position += velocity * Time.deltaTime * Vector3.ProjectOnPlane(direction, Vector3.up);

				
				}

				public void update()
				{
					if (velocity < 0)
					{
						velocity = 0;
					}

					velocity -= deceleration * Time.deltaTime;
				}
			}
		}
	}
}