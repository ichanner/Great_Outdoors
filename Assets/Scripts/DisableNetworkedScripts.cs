using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Valve.VR;
using UnityEditor;
namespace TGOV
{
    public class DisableNetworkedScripts : MonoBehaviour
    {


        public MonoBehaviour[] scripts;
        public GameObject[] gameObjects;

        [Header("Other")]
        public Camera playerCamera;
        public AudioListener audioListener;
        public SteamVR_Behaviour_Pose rightHand;
        public SteamVR_Behaviour_Pose leftHand;
        public Transform handL;
        public Transform handR;

        private PhotonView photonView;

        void Start()
        {
            photonView = GetComponent<PhotonView>();

            if (!photonView.IsMine)
            {
                this.enabled = false;

                foreach (var script in scripts) {

                    script.enabled = false;
                }

                foreach (var gameObject in gameObjects)
                {
                    gameObject.SetActive(false);
                }

                rightHand.enabled = false;
                leftHand.enabled = false;
                playerCamera.enabled = false;
                audioListener.enabled = false;
               
            }
        }

        void Update()
        {

        }
    }
}