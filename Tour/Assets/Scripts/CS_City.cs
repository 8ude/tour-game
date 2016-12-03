using UnityEngine;
using System.Collections;

public class CS_City : MonoBehaviour {
	/*
	 * 1st ring: 
	 * [(d,d,z),
	 * (2d,0,z),
	 * (d,-d,z),
	 * (0,-2d,z),
	 * (-d,-d,z),
	 * (-2d,0,z),
	 * (-d,d,z),
	 * (0,2d,z)]
	 */

	Vector3[] firstRing;
	[SerializeField] GameObject bigBuildingSpawn;
	//This is the minimum distance between building site corners
	[SerializeField] float minDistance = 23.75f;
	[SerializeField] float zOff = -1.1f;
	int index = 0;

	void Awake() {
		firstRing = new Vector3[8];
		firstRing[0] = new Vector3(minDistance, minDistance, zOff);
		firstRing[1] = new Vector3(2 * minDistance, 0f, zOff);
		firstRing[2] = new Vector3(minDistance, -minDistance, zOff);
		firstRing[3] = new Vector3(0f, -2 * minDistance, zOff);
		firstRing[4] = new Vector3(-minDistance, -minDistance, zOff);
		firstRing[5] = new Vector3(-2*minDistance, 0f, zOff);
		firstRing[6] = new Vector3(-minDistance, minDistance, zOff);
		firstRing[7] = new Vector3(0f, 2*minDistance, zOff);
	}

	public void GeneratePreBuilding () {
		if (index < 8) {
			Instantiate (bigBuildingSpawn, firstRing [index], Quaternion.Euler (0, 0, 45f));
			index++;
		}
	}

}
