using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using TGOV.Managers;
#if !UNITY_EDITOR && UNITY_WEBGL
WebGLInput.captureAllKeyboardInput = true;
#endif
namespace TGOV
{
    namespace Components
    {
        enum States
        {
            IDLE,
            HOVER,
            HELD,
            DROP
        }

        public class Interactable : MonoBehaviourPun
        {
            public PhotonView view;

            [HideInInspector] public PlayerHand activeHand;
            [HideInInspector] public PlayerHand hoveringHand;

            [SerializeField, Range(0f, 10f)] public float proximity;
            [SerializeField, Range(.0f, 1f)] public float lerpValue;

            public bool canLock;
            public bool lockOnGrab;
            
            public bool isHeld;
            public bool isTouchingRight;
            public bool isTouchingLeft;

            public bool freeGrab;

            public Vector3 lockedCordinates;
            public Quaternion snappedRotation;

            public int state;

            public List<GameObject> childJoints = new List<GameObject>();

            public bool locked { set; get; }
            public Transform joint { get; set; }

            void Awake()
            {
                view = GetComponent<PhotonView>();
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
                initizializeJoint();
            }



            public Interactable(bool canLock = true, bool lockOnGrab = false)
            {
                //Later Implementation for bigger entites like weapons and tools not needed for now as everything is simple and a demo
            }

            void FixedUpdate()
            {
                lerpToHand();
                updateOutline();
            }


            private void updateOutline()
            {
               GetComponent<Outline>().enabled = false;   
            }


            public void Hover()
            {
            }


            public void Pickup(PlayerHand hand)
            {
                if (view.Owner == PhotonNetwork.LocalPlayer)
                    return;

                hand.Adjust();

                if (lockOnGrab)
                    hand.Lock();

                hand.Adjust();

                view.RequestOwnership();

                OutputManager.instance.Pulse(0, .1f, 10, 8, hand.pose.inputSource);

                hand.view.RPC("RPC_PickUpObject", RpcTarget.AllBuffered, view.ViewID);
               
                transform.SetParent(hand.gameObject.transform);

                activeHand = hand;
            }

            public void Drop()
            {
                if (locked)
                    return;

                OutputManager.instance.Pulse(0, .1f, 10, 8, activeHand.pose.inputSource);

                activeHand.Throw(GetComponent<Rigidbody>());

                transform.parent = null;
                
                resetPivot();
            
                activeHand.view.RPC("RPC_DropObject", RpcTarget.AllBuffered, view.ViewID);

                activeHand = null;
            }


            public void Lock()
            {
                if (!canLock)
                    return;

                OutputManager.instance.Pulse(0, .5f, 13, 11, activeHand.pose.inputSource);

                if (locked)
                {
                    locked = false;
                    activeHand.Drop();
                }
                else
                {
                    locked = true;
                }
            }

            private void lerpToHand()
            {
                if (!activeHand)
                    return;
                   
                if (activeHand.transform.position != transform.position)
                {
                    transform.position = Vector3.Lerp(activeHand.transform.position, transform.position, lerpValue);  
                }
                
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

            public GameObject getClosestChildJoint()
            {
                return null; //For mutlijointed tools
            }
        }

        interface Iinteractable
        {

        }
    }
}