using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using TGOV.Components;
namespace TGOV {
    public class InteractableCollider : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {

        }


        void OnTriggerEnter(Collider other)
        {

            if (other.gameObject.CompareTag("Hand"))
            {
                if (other.gameObject.GetComponentInParent<PlayerHand>().pose.inputSource == SteamVR_Input_Sources.RightHand)
                {
                    GetComponentInParent<Interactable>().isTouchingRight = true;
                }
                else if (other.gameObject.GetComponentInParent<PlayerHand>().pose.inputSource == SteamVR_Input_Sources.LeftHand)
                {
                    GetComponentInParent<Interactable>().isTouchingLeft = true;
                }
            }
        }

        void OnTriggerExit(Collider other)
        {
            if (other.gameObject.CompareTag("Hand"))
            {
                if (other.gameObject.GetComponentInParent<PlayerHand>().pose.inputSource == SteamVR_Input_Sources.RightHand)
                {
                    GetComponentInParent<Interactable>().isTouchingRight = false;
                }
                else if (other.gameObject.GetComponentInParent<PlayerHand>().pose.inputSource == SteamVR_Input_Sources.LeftHand)
                {
                    GetComponentInParent<Interactable>().isTouchingLeft = false;
                }
            }


        }
    }
}