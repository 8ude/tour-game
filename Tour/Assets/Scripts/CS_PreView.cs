using UnityEngine;
using System.Collections;

public class CS_PreView : MonoBehaviour {
	[SerializeField] GameObject myObject;

	void OnTriggerEnter (Collider other) {
		Debug.Log ("OnTriggerEnter");
		if (other.tag == CS_Global.TAG_PLAYER || other.tag == CS_Global.TAG_FRIEND) {
			Instantiate (myObject, this.transform.position, Quaternion.identity);
			Destroy (this.gameObject);
		}
	}
}
