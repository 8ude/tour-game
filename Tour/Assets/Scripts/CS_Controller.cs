using UnityEngine;
using System.Collections;


public class CS_Controller : MonoBehaviour {

	public float moveSpeed = 10.0f;

	public Rigidbody playerRB;

	Vector3 moveInput;
	Vector3 moveVelocity;

	float inputAxisX;
	float inputAxisY;

//	Camera mainCamera;

	void Start(){



//		playerRB = GetComponent<Rigidbody> ();
//		mainCamera = FindObjectOfType<Camera> ();
		
	}


	void Update () {

		inputAxisX = Input.GetAxis("Horizontal") + Input.GetAxis("Horizontal_Joy");
		inputAxisY = Input.GetAxis("Vertical") + Input.GetAxis("Vertical_Joy");

		moveInput = new Vector3(inputAxisX, inputAxisY ,0f);
		moveVelocity = moveInput * moveSpeed * 100;

	}

	void FixedUpdate(){
		playerRB.velocity = moveVelocity * Time.deltaTime;

	}

}