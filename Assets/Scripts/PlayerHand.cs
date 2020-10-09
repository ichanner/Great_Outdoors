using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Valve.VR;
public class Hand : MonoBehaviour
{

		private PhotonView view;
		private SteamVR_Behaviour_Pose hand;

		void Awake()
		{
			view = GetComponent<PhotonView>();
			hand = GetComponent<SteamVR_Behaviour_Pose>();
		}

		void FixedUpdate()
		{
			if (!view.IsMine)
			{
				hand.enabled = false;
			}
		}

	
}
