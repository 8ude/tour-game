using UnityEngine;
using System.Collections;

public class CS_NatureEnding : MonoBehaviour {

	GameObject playerObject;

	public GameObject friendObject;
	public float spawnFriendTimer = 0.25f;
	bool _spawningFriends;


	// Use this for initialization
	void Start () {

		_spawningFriends = false;
		playerObject = GameObject.Find (CS_Global.NAME_PLAYER);
	
	}
	
	// Update is called once per frame
	void Update () {
		spawnFriendTimer -= Time.deltaTime;
		if (spawnFriendTimer <= 0f && _spawningFriends) {
			Instantiate (friendObject, transform.position, Quaternion.identity);
			spawnFriendTimer = 0.25f;
		}
	}

	void OnTriggerEnter(Collider other) {
		if (other.tag == CS_Global.TAG_PLAYER) {
			_spawningFriends = true;
			GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ().FadeToWhite ();

		}
	}

}
