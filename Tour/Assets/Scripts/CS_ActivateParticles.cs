﻿using UnityEngine;
using System.Collections;

public class CS_ActivateParticles : MonoBehaviour {

	public ParticleSystem contact;


	void OnTriggerEnter (Collider other)  {

		if (other.tag == "PreTree" || other.tag == "PreBuilding") {
			contact.Play();
		}
	}
}
