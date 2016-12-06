using UnityEngine;
using System.Collections;

public class CS_Trees : MonoBehaviour {

	public GameObject []myObjects;

	void OnTriggerEnter (Collider other) {

		if (other.tag == CS_Global.TAG_PLAYER || other.tag == CS_Global.TAG_FRIEND) {
			Instantiate (myObjects[Random.Range (0, myObjects.Length)], this.transform.position, Quaternion.Euler (45, -90, 90));
			Destroy (this.gameObject);
		}
	}
}
