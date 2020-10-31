using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;



namespace TGOV
{
    namespace Managers
    {

        public class PlayerManager : PunSingleton<PlayerManager>
        {

            public TextMeshProUGUI velocityDebugText;
            public GameObject playerPrefab;

            private GameObject localPlayer;
            private Dictionary<int, GameObject> players = new Dictionary<int, GameObject>();


            private void subscribeToPunCallbacks()
            {
                NetworkManager.instance.playerJoinedRoomEvent += initializeLocalPlayer;
            }

            void Start()
            {
                subscribeToPunCallbacks();
            }

            void FixedUpdate()
            {
              
              // velocityDebugText.SetText("Velocity " + players[getId()].GetComponent<Entities.Player>().getVelocity() + " m/s");
            }

            //Getters and setters

            public int getId()
            {
                return localPlayer.GetComponent<PhotonView>().ViewID;
            }

         

            private void initializeLocalPlayer()
            {
                localPlayer = PhotonNetwork.Instantiate(playerPrefab.name, Vector3.zero, Quaternion.identity);
              
                localPlayer.GetComponent<PhotonView>().RPC("RPC_SpawnPlayer", RpcTarget.AllBuffered);
            }

            //Player Management

            public void addPlayer(int id, GameObject player)
            {
                players.Add(id, player);
            }

            public GameObject getPlayer(int id)
            {
                if (players.ContainsKey(id))
                {
                    return players[id];
                }

                return null;
            }

        }
    }
}

