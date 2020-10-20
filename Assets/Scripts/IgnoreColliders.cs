using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace TGOV
{

    public class IgnoreColliders : MonoBehaviour
    {

        public int[] layersToIgnore;

        void Start()
        {
        }

        void Update()
        {
            foreach (var layer in layersToIgnore)
            {
                Physics.IgnoreLayerCollision(gameObject.layer, layer);
            }
        }
        
    }

}
