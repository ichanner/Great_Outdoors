using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TGOV.Entities;
using Photon.Pun;
using TGOV.Components;

namespace TGOV {


 public class DistantInteractor : MonoBehaviour
 {
     // Start is called before the first frame update
     void Start()
     {

     }

     // Update is called once per frame
     void Update()
     {

     }

        /*
     private void OnTriggerEnter(Collider other)
     {
         if (other.gameObject.CompareTag("Joint"))
             GetComponentInParent<PlayerHand>().interactablesInRange.Add(other.gameObject.GetComponentInParent<PhotonView>().ViewID, other.gameObject.GetComponentInParent<Interactable>());
     }

     private void OnTriggerExit(Collider other)
     {
         if (other.gameObject.CompareTag("Joint"))
             GetComponentInParent<PlayerHand>().interactablesInRange.Remove(other.gameObject.GetComponentInParent<PhotonView>().ViewID);

     }
        */
    }
}  
