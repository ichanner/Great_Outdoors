using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace TGOV
{
    public class CoolDown : MonoBehaviour
    {

        private float coolDown;
        private float timer;

        public CoolDown(float coolDown)
        {
            this.timer = coolDown;
            this.coolDown = coolDown;
        }

        void Start()
        {
        }

        public bool isExpired()
        {
            if (timer == 0)
            {
                timer = coolDown;
                return true;
            }

            return false;
        }

        public void update()
        {
            if (timer > 0)
            {
                timer -= Time.deltaTime;
            }

            if (timer < 0)
            {
                timer = 0;
            }
        }
    }
}