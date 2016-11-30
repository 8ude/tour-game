using UnityEngine;
using System.Collections;


public class Controller : MonoBehaviour {

	public float moveSpeed = 10.0f;

	public Rigidbody playerRB;

	Vector3 moveInput;
	Vector3 moveVelocity;

//	Camera mainCamera;

	void Start(){

//		playerRB = GetComponent<Rigidbody> ();
//		mainCamera = FindObjectOfType<Camera> ();
		
	}


	void Update () {

		moveInput = new Vector3(Input.GetAxis("Horizontal_Joy"), Input.GetAxis("Vertical_Joy"),0f);
		moveVelocity = moveInput * moveSpeed * 100;

	}

	void FixedUpdate(){
		playerRB.velocity = moveVelocity * Time.deltaTime;

	}

}