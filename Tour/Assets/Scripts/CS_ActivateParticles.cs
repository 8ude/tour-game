using UnityEngine;
using System.Collections;

public class CS_ActivateParticles : MonoBehaviour {

	public ParticleSystem contact;
	public ParticleSystem splash;

	void Awake(){
		splash.Stop();
	}


	void OnTriggerEnter (Collider other)  {

		if (other.tag == "PreTrees" || other.tag == "PreBuilding") {
			contact.Play();
		}

		if (other.tag == "Water") {
			splash.Play();
		}
			
	}
	void OnTriggerExit (Collider other){
//		Debug.Log("Out of Lake");
			splash.Stop();

	}
}
