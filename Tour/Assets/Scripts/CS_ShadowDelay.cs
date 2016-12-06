using UnityEngine;
using System.Collections;
using DG.Tweening;

public class CS_ShadowDelay : MonoBehaviour {

	float myFloat = 0.0f;

	Projector proj;


	void Awake(){
	proj = GetComponent<Projector>();
	}

	void Start () {
		TweenShadow ();
		
	}
	
	// Update is called once per frame
	void Update () {

			proj.farClipPlane = myFloat;
	}

	public void TweenShadow (){
		if (myFloat == 0) {
			DOTween.To (() => myFloat, x => myFloat = x, 5.5f, 2.9f);
		}
	}

}
