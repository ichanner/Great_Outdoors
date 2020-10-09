﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Singleton<T> : MonoBehaviour where T : MonoBehaviour
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
