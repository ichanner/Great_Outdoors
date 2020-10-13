using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace TGOV
{

    namespace Controllers
    {

        public class InterpolationController : MonoBehaviourPun
        {

            private Transform networkedObject;
            private PhotonView view;
            private Vector3 targetPosition;
            private Quaternion targetRotation;


            public InterpolationController(Transform networkedObject, PhotonView view)
            {
                this.networkedObject = networkedObject;
                this.view = view;
            }

            
            private void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
            {
                if (stream.IsWriting)
                {
                    Debug.Log(transform.position);
                    stream.SendNext(transform.position);
                    stream.SendNext(transform.rotation);
                }
                else
                {
                    this.targetPosition = (Vector3)stream.ReceiveNext();
                    this.targetRotation = (Quaternion)stream.ReceiveNext();
                }
            }


            public void smoothMove(float lerpRate = .25f, float rotationRateOffset = 500f)
            {
                networkedObject.position = Vector3.Lerp(networkedObject.position, targetPosition, lerpRate);
                networkedObject.rotation = Quaternion.RotateTowards(networkedObject.rotation, targetRotation, rotationRateOffset * Time.deltaTime);
            }
        }
    }
}