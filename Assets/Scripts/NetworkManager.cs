using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
namespace TGOV.Network
{

    public class NetworkManager : MonoBehaviourPunCallbacks
    {

        [HideInInspector]
        public NetworkManager instance;


        void Start()
        {
            if (instance == null)
            {
                instance = (NetworkManager)FindObjectOfType(typeof(NetworkManager));

                DontDestroyOnLoad(gameObject);
            }

            else
            {
                Destroy(gameObject);
            }
        }


        public void Connect()
        {
            Debug.Log("Connecting...");
            PhotonNetwork.ConnectUsingSettings();
        }

        public bool isConnected()
        {
            return PhotonNetwork.IsConnected;
        }

        //Callbacks

        public override void OnConnectedToMaster()
        {
            Debug.Log("Connected to master");

            PhotonNetwork.JoinLobby(Photon.Realtime.TypedLobby.Default);
        }

        public override void OnJoinedLobby()
        {
            JoinRoom("TestRoom");

            Debug.Log("Joined Lobby");
         
        }

        public override void OnJoinedRoom()
        {
            //SceneManager.LoadScene(1);//Test
            Debug.Log("Joined Room");

            PhotonNetwork.Instantiate("PlayerAsset 1", Vector3.zero, Quaternion.identity);

            Debug.Log(PhotonNetwork.LocalPlayer.UserId);
            Debug.Log(PhotonNetwork.CloudRegion);
        }

        //Functions

        public void JoinRoom(string room)
        {

            PhotonNetwork.JoinOrCreateRoom(room, new Photon.Realtime.RoomOptions { MaxPlayers = 20 }, Photon.Realtime.TypedLobby.Default);
        }


        public void CreateRoom(string room)
        {
            PhotonNetwork.CreateRoom(room, new Photon.Realtime.RoomOptions { MaxPlayers = 4 }, Photon.Realtime.TypedLobby.Default);
        }

      
    }
}