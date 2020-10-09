using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;

namespace TGOV
{

    namespace Managers
    {

        public class PlayerManager : Singleton<PlayerManager>
        {
            public GameObject playerPrefab;
            private PhotonView photonView;
            private GameObject localPlayer;

            /// DEBUG : Remove Later
            public TextMeshProUGUI velocityDebugText;


            private void initValues()
            {
                this.photonView = GetComponent<PhotonView>();
            }

            private void initializeLocalPlayer()
            {
         
                //photonView.RPC("RPC_SpawnPlayer", RpcTarget.MasterClient);
            }

            void Start()
            {

                //initValues();
                //initializeLocalPlayer();
            }

            void FixedUpdate()
            {
      
            }

            [PunRPC]
            public void RPC_SpawnPlayer()
            {
                PhotonNetwork.Instantiate(playerPrefab.name, Vector3.zero, Quaternion.identity);
            }
           
        }
    }
}

