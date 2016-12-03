using UnityEngine;
using System.Collections;

public class CS_AddScore : MonoBehaviour {
	
	[SerializeField] int myScore;

	void Start () {
		GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ().AddScore (myScore);

		if (gameObject.tag == "Friend") {
			GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ().AddFriendScore (myScore);
		} else if (gameObject.tag == "Tree") {
			GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ().AddTreeScore (myScore);
		} else if (gameObject.tag == "Station") {
			GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ().AddStationScore (myScore);
		} else if (gameObject.tag == "Site") {
			GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ().AddSiteScore (myScore);
		} else if (gameObject.tag == "Building") {
			GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ().AddBuildingScore (myScore);
		}
	}
		

}
