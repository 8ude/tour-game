using UnityEngine;
using System.Collections;

public class CS_AddScore : MonoBehaviour {
	
	[SerializeField] int myScore;

	void Start () {
		GameObject.Find (CS_Global.NAME_LOADSTAGE).GetComponent<CS_LoadStage> ().AddScore (myScore);

		if (gameObject.tag == "Friend") {
			GameObject.Find (CS_Global.NAME_LOADSTAGE).GetComponent<CS_LoadStage> ().AddFriendScore ();
		} else if (gameObject.tag == "Tree") {
			GameObject.Find (CS_Global.NAME_LOADSTAGE).GetComponent<CS_LoadStage> ().AddTreeScore ();
		} else if (gameObject.tag == "Station") {
			GameObject.Find (CS_Global.NAME_LOADSTAGE).GetComponent<CS_LoadStage> ().AddStationScore ();
		} else if (gameObject.tag == "Site") {
			GameObject.Find (CS_Global.NAME_LOADSTAGE).GetComponent<CS_LoadStage> ().AddSiteScore ();
		}
	}
		

}
