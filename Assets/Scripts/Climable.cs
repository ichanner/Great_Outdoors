using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TGOV.Components;
using TGOV.Managers;
using TGOV.Entities;
namespace TGOV {

    namespace Components {

        public class Climable : Interactable
        {
           
            void Awake()
            {

            }

            // Start is called before the first frame update
            void Start()
            {

            }

            // Update is called once per frame
            void FixedUpdate()
            {
                 updateClimb();   
            }

            private void updateClimb() {
                
                if (activeHand)
                {
                    var id = PlayerManager.instance.getId();

                    PlayerManager.instance.getPlayer(id).GetComponent<Player>().handleClimb(activeHand);
                }
            }

            public void Climb(PlayerHand hand)
            {
                if (activeHand != null)
                {
                    activeHand.StopClimb();
                    activeHand = hand;
                }

                activeHand = hand;

                OutputManager.instance.Pulse(0, .1f, 10, 8, hand.pose.inputSource);

            }

            public void StopClimb()
            {
                activeHand = null;

                var id = PlayerManager.instance.getId();

                PlayerManager.instance.getPlayer(id).GetComponent<Player>().playerController.state = 0;
            }

        }
    }
}