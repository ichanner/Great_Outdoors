using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Valve.VR;
public class PlayerNetworking : MonoBehaviour
{

    public TGOV.Entities.Entity player;
    public Camera playerCamera;
    public SteamVR_Behaviour_Pose rightHand;
    public SteamVR_Behaviour_Pose leftHand;


    private PhotonView photonView;

    // Start is called before the first frame update
    void Start()
    {
        photonView = GetComponent<PhotonView>();

        if (!photonView.IsMine)
        {
            this.enabled = false;
            rightHand.enabled = false;
            leftHand.enabled = false;
            playerCamera.enabled = false;
            player.enabled = false;
            

        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
