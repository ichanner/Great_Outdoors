using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace TGOV
{

    namespace Controllers
    {

        public class InterpolationController : MonoBehaviour
        {

            public Transform networkedObject { set; get; }
            public Vector3 targetPosition { set; get; }
            public Quaternion targetRotation { set; get; }
         

            public InterpolationController(Transform networkedObject)
            {
                this.networkedObject = networkedObject;
            }

            public void smoothMove(float lerpRate = .25f, float rotationRateOffset = 500f)
            {
                networkedObject.position = Vector3.Lerp(networkedObject.position, targetPosition, lerpRate);
                networkedObject.rotation = Quaternion.RotateTowards(networkedObject.rotation, targetRotation, rotationRateOffset * Time.deltaTime);
            }
        }
    }
}