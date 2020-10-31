using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using TGOV.Entities;

namespace TGOV
{
	public class PunSingleton<T> : MonoBehaviourPunCallbacks where T : MonoBehaviourPunCallbacks
	{
		public static T instance { get; set; }

		protected void Awake()
		{
			if (instance == null)
			{
				instance = (T)FindObjectOfType(typeof(T));

				DontDestroyOnLoad(gameObject);
			}

			else
			{
				Destroy(gameObject);
			}
		}
	}

	public class MonoSingleton<T> : MonoBehaviour where T : MonoBehaviour
	{
		public static T instance { get; set; }

		protected void Awake()
		{
			if (instance == null)
			{
				instance = (T)FindObjectOfType(typeof(T));

				DontDestroyOnLoad(gameObject);
			}

			else
			{
				Destroy(gameObject);
			}
		}
	}


	public class EntitySingleton<T> : Entity where T : Entity
	{
		public static T instance { get; set; }

		protected void Awake()
		{
			if (instance == null)
			{
				instance = (T)FindObjectOfType(typeof(T));

				DontDestroyOnLoad(gameObject);
			}

			else
			{
				Destroy(gameObject);
			}
		}
	}
}