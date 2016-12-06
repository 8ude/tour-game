using UnityEngine;
using System.Collections;

public class CS_TitleAntimation : MonoBehaviour {

	public Animator titleAnim;

	public GameObject title; 

	void Start(){
		titleAnim.enabled = false;
	}


	void OnTriggerEnter (Collider other){

		if(other.tag == "Player"){
			titleAnim.enabled = true;

			titleAnim.Play("TitleAnimation");

		}

	}


}
