using UnityEngine;
using System.Collections;

public class CS_PreView : MonoBehaviour {
	[SerializeField] GameObject myObject;
	[SerializeField] GameObject selfMesh;

	// components for beginning animation
	Vector3 beginScale = new Vector3 (1, 1, 1);
	float timer = 0f;
	float spawnTime = 1f;

	void Start () {

		//objects seem to grow out of the ground when they are spawned
		transform.localScale = new Vector3(0f,0f,0f);

	}

	void Update () {
		if (timer < spawnTime) {
			transform.localScale = beginScale * timer;
			timer += Time.deltaTime;
		}
	}

	void OnTriggerEnter (Collider other) {

		if (other.tag == CS_Global.TAG_PLAYER || other.tag == CS_Global.TAG_FRIEND) {
			if (myObject.name == "TreePrefab") {
				Instantiate (myObject, this.transform.position, Quaternion.Euler (0, -90, 90));
				Destroy (this.gameObject);
			} else {
				Instantiate (myObject, this.transform.position, this.transform.rotation);
				Destroy (this.gameObject);
			}
		}
	}
}
