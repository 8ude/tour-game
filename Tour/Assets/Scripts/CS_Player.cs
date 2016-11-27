using UnityEngine;
using System.Collections;

public class CS_Player : MonoBehaviour {
	[SerializeField] Rigidbody myRigidbody;

	private Vector3 myDirection;
	private bool onMove;

	private Vector3 moveAxis;
	[SerializeField] float mySpeed;
	[SerializeField] float moveGravity;
	[SerializeField] float moveSensitivity;
	// Use this for initialization
	void Start () {
		onMove = false;
	}
	
	// Update is called once per frame
	void Update () {
		UpdateMove ();
	}

	public void UpdateMove () {
		if (onMove) {
			moveAxis += myDirection * moveSensitivity;
			if (moveAxis.magnitude > 1)
				moveAxis.Normalize ();
		}
//		Debug.Log ("ControlMove" + myDirection + " : " +moveAxis);

		//set the speed of the player
		myRigidbody.velocity = moveAxis * mySpeed;

		float t_moveAxisReduce = Time.deltaTime * moveGravity;
		if (moveAxis.magnitude < t_moveAxisReduce)
			moveAxis = Vector3.zero;
		else
			moveAxis *= (moveAxis.magnitude - t_moveAxisReduce);

		Camera.main.GetComponent<CS_Camera> ().SetPreMovePosition (moveAxis);
		//Debug.Log ("ControlMove" + myDirection + " : " +moveAxis);
	}

	public void SetDirection (Vector3 g_direction) {
		myDirection = g_direction;
	}

	public void SetOnMove (bool g_onMove) {
		onMove = g_onMove;
	}
}
