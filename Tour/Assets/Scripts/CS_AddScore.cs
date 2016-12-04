using UnityEngine;
using System.Collections;

public class CS_AddScore : MonoBehaviour {

	void Start () {
		

		if (gameObject.tag == "Friend") {
			GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ().AddFriendScore ();
		} else if (gameObject.tag == "Tree") {
			GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ().AddTreeScore ();
		} else if (gameObject.tag == "BigTree") {
			GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ().AddBigTreeScore ();
		} else if (gameObject.tag == "Station") {
			GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ().AddStationScore ();
		} else if (gameObject.tag == "Building") {
			GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ().AddBuildingScore ();
		} else if (gameObject.tag == "BigBuilding") {
			GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ().AddBigBuildingScore ();
		}
	}
		

}
