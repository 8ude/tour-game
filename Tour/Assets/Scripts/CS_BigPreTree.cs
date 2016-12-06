using UnityEngine;
using System.Collections;

public class CS_BigPreTree : MonoBehaviour {

	[SerializeField] GameObject[] myObjects;
	[SerializeField] GameObject mySpawns;
	[SerializeField] GameObject myFriendObject;

	[SerializeField] int numSpawns;

	void OnTriggerEnter (Collider other) {

		if (other.tag == CS_Global.TAG_PLAYER || other.tag == CS_Global.TAG_FRIEND) {
			Instantiate (myObjects[Random.Range (0, myObjects.Length)], this.transform.position, Quaternion.Euler (45, -90, 90));
			Instantiate (myObject, this.transform.position, Quaternion.identity);
			Instantiate (myFriendObject, this.transform.position, Quaternion.identity);
			for (int i = 0; i < numSpawns; i ++) {
				

				float spawnX = Random.value * 5f + 5f;
				float spawnY = Random.value * 5f + 5f;

				if (i % 2 == 0) {
					spawnX *= -1;
				}
				if (i < 2) {
					spawnY *= -1;
				}

				Vector3 spawnPos = new Vector3 (this.transform.position.x + spawnX, this.transform.position.y + spawnY, 0f); 
						

				Instantiate (mySpawns, spawnPos, Quaternion.identity);
			}
			Destroy (this.gameObject);
		}
	}
}
