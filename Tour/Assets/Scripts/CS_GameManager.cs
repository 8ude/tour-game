using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class CS_GameManager : MonoBehaviour {

	public GameObject city;


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		GameObject[] preBuildings;
		preBuildings = GameObject.FindGameObjectsWithTag ("PreBuilding");
		if (preBuildings.Length == 0) {
			city.SendMessage ("GeneratePreBuilding");
		}


	}
}
