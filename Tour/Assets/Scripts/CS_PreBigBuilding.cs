using UnityEngine;
using System.Collections;

public class CS_PreBigBuilding : MonoBehaviour {

	[SerializeField] GameObject myObject;
	[SerializeField] GameObject mySpawns;
	[SerializeField] int numSpawns;
	[SerializeField] float offset;

	void OnTriggerEnter (Collider other) {

		if (other.tag == CS_Global.TAG_PLAYER || other.tag == CS_Global.TAG_FRIEND) {
			Instantiate (myObject, this.transform.position, Quaternion.Euler (0, 0, 45));
			for (int i = 0; i < numSpawns; i ++) {


				float spawnX = offset;
				float spawnY = offset;

				if (i % 2 == 0) {
					spawnX *= -1;
				}
				if (i < 2) {
					spawnY *= -1;
				}

				Vector3 spawnPos = new Vector3 (this.transform.position.x + spawnX, this.transform.position.y + spawnY, -0.5f); 


				Instantiate (mySpawns, spawnPos, Quaternion.Euler (0, 0, 45));
			}
			Destroy (this.gameObject);
		}
	}
}

