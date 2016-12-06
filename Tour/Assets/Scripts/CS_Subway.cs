using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class CS_Subway : MonoBehaviour {

	private int myNextStationNum;

	public GameObject[] myStations;
	private List<Vector3> myStationPositionList;

	private List<GameObject> myPassengerList = new List<GameObject>();

	private bool isOn = false;

	[SerializeField] float myVelocity;
	[SerializeField] float maxVelocity;
	[SerializeField] float minVelocity;
	[SerializeField] float myStopTime;
	private float myTimer;
	private bool _atStation = false;

	GameObject playerObjecct;

	void Awake() {

		myStationPositionList = new List<Vector3> ();
		for (int i = 0; i < myStations.Length; i++) {
			
			myStationPositionList.Add (myStations [i].gameObject.transform.position);
		}
		Init (myStationPositionList);
	}

	void Start () {
		myNextStationNum = 0;

	}

	void Update () {
		if (!isOn)
			return;

		if (myTimer > 0) {
			myTimer -= Time.deltaTime;
			return;
		}

		Vector3 t_myPosition = this.transform.position;
		Vector3 t_myTargetPosition = myStationPositionList [myNextStationNum];
		Vector3 t_direction = t_myTargetPosition - t_myPosition;
		Vector3 t_deltaPosition;

		if (Vector3.Distance(t_myPosition, t_myTargetPosition) < myVelocity * Time.deltaTime) {
			//arrived
			_atStation = true;
			t_deltaPosition = t_direction.normalized * Vector3.Distance (t_myPosition, t_myTargetPosition);

			myTimer = myStopTime;
			myNextStationNum++;
			if (myNextStationNum >= myStationPositionList.Count) {
				myNextStationNum -= myStationPositionList.Count;
			}
		} else {
			_atStation = false;
			t_deltaPosition = t_direction.normalized * myVelocity * Time.deltaTime;
		}
			
		//move myself
		t_myPosition += t_deltaPosition;
		this.transform.position = t_myPosition;
		//move my passenger
		for (int i = 0; i < myPassengerList.Count; i++) {
			myPassengerList [i].transform.position += (Vector3)t_deltaPosition;
		}
	}

	void OnTriggerStay (Collider other) {
		if ((other.tag == CS_Global.TAG_PLAYER || other.tag == CS_Global.TAG_FRIEND || other.tag == CS_Global.TAG_WORKER) && _atStation) {
//			Debug.Log ("EnterSubway:" + other.tag);
			if (myPassengerList.Contains (other.gameObject) == false)
				myPassengerList.Add (other.gameObject);
		}
	}

	void OnTriggerExit (Collider other) {
		if (other.tag == CS_Global.TAG_PLAYER || other.tag == CS_Global.TAG_FRIEND || other.tag == CS_Global.TAG_WORKER)  {
			if (myPassengerList.Contains (other.gameObject))
				myPassengerList.Remove (other.gameObject);
		}
	}

	public void Init (List<Vector3> g_stationPositionList) {
		myStationPositionList = g_stationPositionList;
		//myNextStationNum = g_nextStationNumber;
		isOn = true;
	} 
}
