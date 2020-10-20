using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;

namespace TGOV
{

    namespace Managers
    {

        public class OutputManager : MonoSingleton<OutputManager>
        {

            [SerializeField] public SteamVR_Action_Vibration haptic;

            void Start()
            {

            }

            void Update()
            {

            }

            public void Pulse(float secondsFromNow, float duration, float frequency, float amplitude, SteamVR_Input_Sources source)
            {
                haptic.Execute(secondsFromNow, duration, frequency, amplitude, source);
            }
        }
    }
}