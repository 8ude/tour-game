using UnityEngine;
using System.Collections;

public class CS_Friend : MonoBehaviour {
	[SerializeField] Rigidbody myRigidbody;
	[SerializeField] float mySpeed;
	[SerializeField] AudioClip[] myClips;

	private Vector3 myDirection;
	private GameObject myTarget;
	private Vector3 myTargetPositionDelta;
	// Use this for initialization



	void Start () {

		PickAudioClip ();

		myTarget = GameObject.Find (CS_Global.NAME_PLAYER);
		myTargetPositionDelta = new Vector3 (Random.Range (-1.0f, 1.0f), Random.Range (-1.2f, 0f), 0f);
		myTargetPositionDelta.Normalize ();
		//Debug.Log (myTargetPositionDelta.magnitude);

		myDirection = myTarget.transform.position - this.transform.position;
		myDirection += myTargetPositionDelta;
	}
	
	// Update is called once per frame
	void Update () {
		myDirection = myTarget.transform.position - this.transform.position;

		myDirection += myTargetPositionDelta;


		myRigidbody.velocity = myRigidbody.velocity.normalized;
//		myRigidbody2D.velocity.Normalize();
		myRigidbody.velocity += myDirection * Time.deltaTime;
		myRigidbody.velocity = myRigidbody.velocity.normalized;
//		myRigidbody2D.velocity.Normalize();
		//Debug.Log (myRigidbody2D.velocity);
		myRigidbody.velocity *= mySpeed;

	}

	void PickAudioClip() {
		int thisClip = Random.Range (0, myClips.Length-1);
		gameObject.GetComponent<AudioSource> ().clip = myClips [thisClip];

	}
}
