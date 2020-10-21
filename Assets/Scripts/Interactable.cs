using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace TGOV
{
    namespace Components
    {
        public class Interactable : MonoBehaviourPun
        {
            public PhotonView view;

            [HideInInspector] public PlayerHand activeHand;
            [HideInInspector] public PlayerHand hoveringHand;

            public float proximity;

            public bool canLock;
            public bool lockOnGrab;
            public bool freeGrab;
            public bool canBeStolen;
            public bool isHeld;
            public bool outline;

            public bool locked { set; get; }
            public Transform joint { get; set; }

            void Awake()
            {
              
            }

   
            private void initizializeJoint()
            {
                foreach (Transform child in transform)
                {
                    if (child.CompareTag("Joint"))
                    {
                        joint = child;
                    }
                }
            }

            void Start()
            {
                view = GetComponent<PhotonView>();
                initizializeJoint();
            }

    

            public Interactable(bool canLock = true, bool lockOnGrab = false)
            {
                //Later Implementation for bigger entites like weapons and tools not needed for now as everything is simple and a demo
            }

            void FixedUpdate()
            {
               updateOutline();  
            }

            public void onGrab()
            {
                view.RequestOwnership();

                if (lockOnGrab)
                {
                   locked = true;
                }
            }

            public void onRelease()
            {
              
            }
          
            public void resetPivot()
            {
                foreach (Transform child in transform)
                {
                    if (child.CompareTag("Joint"))
                    {
                        child.SetParent(null);

                        transform.position = child.position;
                        transform.rotation = child.rotation;

                        child.SetParent(transform);
                    }
                }
            }


            public void setPivot(Vector3 pos)
            {
                Vector3 offset = transform.position - pos;

                foreach (Transform child in transform)
                {
                    child.position += offset;
                }

                transform.position = pos;
            }


            private void updateOutline()
            {
                Outline outline = GetComponent<Outline>();

                if (hoveringHand != null && !activeHand)
                {
                    if (hoveringHand.hovering == this)
                    {
                        outline.enabled = true;
                    }
                    else
                    {
                        outline.enabled = false;
                    }
                }
                else
                {
                    outline.enabled = false;
                }
            }
        }

        interface Iinteractable
        {

        }
    }
}