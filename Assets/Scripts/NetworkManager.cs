using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


namespace TGOV
{
    namespace Managers
    {
        public class NetworkManager : PunSingleton<NetworkManager>
        {

            public event playerConnectedDelegate playerConnectedEvent;
            public delegate void playerConnectedDelegate();

            public event playerJoinedLobbyDelegate playerJoinedLobbyEvent;
            public delegate void playerJoinedLobbyDelegate();

            public event playerJoinedRoomDelegate playerJoinedRoomEvent;
            public delegate void playerJoinedRoomDelegate();

            void Start()
            {
            }

         


            public void Connect()
            {
                PhotonNetwork.ConnectUsingSettings();
            }

            //Getters & Setters

            public bool isConnected()
            {
                return PhotonNetwork.IsConnected;
            }

            //Callbacks

            public override void OnConnectedToMaster()
            {
                playerConnectedEvent?.Invoke();
                PhotonNetwork.JoinLobby(Photon.Realtime.TypedLobby.Default);
            }

            public override void OnJoinedLobby()
            {
                playerJoinedLobbyEvent?.Invoke();
                this.JoinRoom("TestRoom"); //Test
            }

            public override void OnJoinedRoom()
            {
                playerJoinedRoomEvent?.Invoke();
            }


            //Functions

            public void JoinRoom(string room, byte maxPlayers = 4)
            {
                PhotonNetwork.JoinOrCreateRoom(room, new Photon.Realtime.RoomOptions { MaxPlayers = maxPlayers }, Photon.Realtime.TypedLobby.Default);
            }

            public void CreateRoom(string room, byte maxPlayers = 4)
            {
                PhotonNetwork.CreateRoom(room, new Photon.Realtime.RoomOptions { MaxPlayers = maxPlayers }, Photon.Realtime.TypedLobby.Default);
            }

        }
    }
}