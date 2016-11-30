using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class CS_LoadStage : MonoBehaviour {
	[Header("Site")]
	[SerializeField] GameObject mySite;
	[SerializeField] int mySiteAmount;
	private int mySiteFoundAmount = 0;
	[SerializeField] Vector3 mySitePosition;
	[SerializeField] float mySiteDistance;
	private List<GameObject> mySiteList = new List<GameObject>();
	//[Space(5)]
	[Header("Station")]
	[SerializeField] GameObject myStation;
	[SerializeField] int myStationAmount;
	[SerializeField] Vector3 myStationPosition;
	[SerializeField] float myStationDistance;
	[SerializeField] GameObject myStationLine;
	private List<GameObject> myStationList = new List<GameObject>();
	private List<Vector3> myStationPositionList = new List<Vector3> ();
	[SerializeField] GameObject mySubway;
	[SerializeField] int mySubwayAmount;
	//[Space(5)]
	[Header("Tree")]
	[SerializeField] GameObject myTree;
	[SerializeField] int myTreeCenterAmount;
	[SerializeField] int myTreeAmount;
	[SerializeField] Vector3 myTreePosition;
	[SerializeField] float myTreeDistanceToOthers;
	[SerializeField] float myTreeDistanceMax;
	[SerializeField] float myTreeDistanceMin;
	private List<GameObject> myTreeList = new List<GameObject> ();
	//[Space(5)]
	[Header("Friend")]
	[SerializeField] GameObject myFriend;
	[SerializeField] int myFriendAmount;
	[SerializeField] Vector3 myFriendPosition;
	[SerializeField] float myFriendDistance;
	private List<GameObject> myFriendList = new List<GameObject>();
	//[Space(5)]
	[Header("Worker")]
	[SerializeField] GameObject myWorker;
	[SerializeField] int myWorkerAmount;
	[SerializeField] Vector3 myWorkerPosition;
	private List<GameObject> myWorkerList = new List<GameObject>();
	private List<Vector3> myWorkerTargetList = new List<Vector3>();


	[Header("Others")]
	[SerializeField] GameObject TX_Timer;
	[SerializeField] GameObject TX_Score;

	private float Timer = 0;
	private float Score = 0;

	public int FriendScore = 0;
	public int TreeScore = 0;
	public int StationScore = 0;
	public int SiteScore = 0;

	int natureTotal = 0;
	int cityTotal = 0;

	private float ScoreTotal = 0;
	public bool _proceduralScene = false;

	// 0.0 = nature
	// 1.0 = city 
	public float cityScale = 0.5f;

	[SerializeField] GameObject UI_Pause;

	// Use this for initialization
	void Start () {
		if (_proceduralScene) {
			InitSite ();
			InitStation ();
			InitTree ();
			InitFriend ();
			InitWorker ();
		}

		HideInfo ();
		HidePause ();
	}

	private void InitSite () {
		for (int time = 0; time < 1000; time++) {
			if (mySiteList.Count < mySiteAmount) {
				//creat a position
				Vector3 t_position = new Vector3 (
					                     Random.Range (-mySitePosition.x, mySitePosition.x), 
					                     Random.Range (-mySitePosition.y, mySitePosition.y),
										 0f
				                     );
				//check if it's at a good position
				bool isGood = true;
				isGood = CheckIfFarEnough (t_position, mySiteList, mySiteDistance);

				if (isGood) {
					GameObject t_site = Instantiate (mySite, t_position, Quaternion.identity) as GameObject;
					mySiteList.Add (t_site);
				}
			} else {
				Debug.Log ("InitSites times : " + time);
				break;
			}
		}
	}

	private void InitStation () {
		for (int time = 0; time < 1000; time++) {
			if (myStationList.Count < myStationAmount) {
				//creat a position
				Vector3 t_position = new Vector3 (
					Random.Range (-myStationPosition.x, myStationPosition.x), 
					Random.Range (-myStationPosition.y, myStationPosition.y),
					0f
				);
				//check if it's at a good position
				bool isGood = true;
				//check if it's too close to sites
				isGood = CheckIfFarEnough (t_position, mySiteList, myStationDistance);

				//check if it's too close to other stations
				if (isGood)
					isGood = CheckIfFarEnough (t_position, myStationList, myStationDistance);

				if (isGood)
					isGood = CheckIfFarEnoughLine (t_position, myStationList, myStationDistance);

				if (isGood) {
					GameObject t_station = Instantiate (myStation, t_position, Quaternion.identity) as GameObject;
					myStationList.Add (t_station);
				}
			} else {
				Debug.Log ("InitStation times : " + time + "; Count : " + myStationList.Count);
				break;
			}
		}

		//draw line
		for (int i = 0; i < myStationList.Count; i++) {
			int t_next = i + 1;
			if (t_next >= myStationList.Count)
				t_next -= myStationList.Count;
			Vector3 t_direction = myStationList [t_next].transform.position - myStationList [i].transform.position;
			Vector3 t_position = (myStationList [t_next].transform.position + myStationList [i].transform.position) / 2;

			Quaternion t_quaternion = Quaternion.Euler (0, 0, 
				Vector3.Angle (Vector3.up, t_direction) * Vector3.Cross (Vector3.up, (Vector3)t_direction).normalized.z);
			//Debug.Log (Vector3.Cross (Vector3.up, (Vector3)t_direction));
			GameObject t_line = Instantiate (myStationLine, t_position, t_quaternion) as GameObject;
			t_line.transform.localScale = new Vector3 (t_line.transform.localScale.x, t_direction.magnitude, 1);
		}

		//place subway
		for (int i = 0; i < myStationList.Count; i++) {
			myStationPositionList.Add (myStationList [i].transform.position);
		}
		int t_stationsPerSubway = myStationPositionList.Count / mySubwayAmount; 
		for (int i = 0; i < mySubwayAmount; i++) {
			int t_lastStationNumber = i * t_stationsPerSubway;
			GameObject t_subway = Instantiate (
				                      mySubway, 
				                      myStationPositionList [t_lastStationNumber],
				                      Quaternion.identity
			                      ) as GameObject;
			t_subway.GetComponent<CS_Subway> ().Init (myStationPositionList, t_lastStationNumber);
		}
	}

	private void InitTree () {
		//create tree center
		for (int time = 0; time < 1000; time++) {
			if (myTreeList.Count < myTreeCenterAmount) {
				//creat a position
				Vector3 t_position = new Vector3 (
					                     Random.Range (-myTreePosition.x, myTreePosition.x), 
					                     Random.Range (-myTreePosition.y, myTreePosition.y),
										 0f
				                     );
				//check if it's at a good position
				bool isGood = true;
				//check if it's too close to sites
				isGood = CheckIfFarEnough (t_position, mySiteList, myTreeDistanceToOthers);
				//check if it's too close to other stations
				if (isGood)
					isGood = CheckIfFarEnough (t_position, myStationList, myTreeDistanceToOthers);
				
				if (isGood)
					isGood = CheckIfFarEnoughLine (t_position, myStationList, myTreeDistanceToOthers);

				//check if it's too close to other trees
				if (isGood)
					isGood = CheckIfFarEnough (t_position, myTreeList, myTreeDistanceToOthers);

				if (isGood) {
					GameObject t_Tree = Instantiate (myTree, t_position, Quaternion.identity) as GameObject;
					myTreeList.Add (t_Tree);
				}
			} else {
				Debug.Log ("InitTree times : " + time + "; Count : " + myTreeList.Count);
				break;
			}
		}
			//Debug.Log ("InitTree times : " + time + "; Count : " + myTreeList.Count);

		//create other trees
		for (int time = 0; time < 5000; time++) {
			if (myTreeList.Count < myTreeAmount) {
				//creat a position
				Vector3 t_position = new Vector3 (
					Random.Range (-myTreePosition.x, myTreePosition.x), 
					Random.Range (-myTreePosition.y, myTreePosition.y)
				);
				//check if it's at a good position
				bool isGood = false;
				//check if it's not too far to other trees

				for (int i = 0; i < myTreeList.Count; i++) {
					if (Vector3.Distance (myTreeList [i].transform.position, t_position) < myTreeDistanceMax) {
						isGood = true;
						break;
					}
				}
				//check if it's too close to sites
				if (isGood)
					isGood = CheckIfFarEnough (t_position, mySiteList, myTreeDistanceToOthers);
				//check if it's too close to other stations
				if (isGood)
					isGood = CheckIfFarEnough (t_position, myStationList, myTreeDistanceToOthers);
				
				if (isGood)
					isGood = CheckIfFarEnoughLine (t_position, myStationList, myTreeDistanceToOthers);

				//check if it's too close to other trees
				if (isGood)
					isGood = CheckIfFarEnough (t_position, myTreeList, myTreeDistanceMin);

				if (isGood) {
					GameObject t_Tree = Instantiate (myTree, t_position, Quaternion.identity) as GameObject;
					myTreeList.Add (t_Tree);
				}
			} else {
				Debug.Log ("InitTree times : " + time + "; Count : " + myTreeList.Count);
				break;
			}
		}

	}

	private void InitFriend () {
		//create friend at each site
		for (int i = 0; i < mySiteList.Count; i++) {
			Vector2 RandomVector = Random.insideUnitCircle;
			Vector3 t_position = (Vector3) mySiteList [i].transform.position ;
			t_position += new Vector3 (RandomVector.x, RandomVector.y, 0f) * myFriendDistance;
			GameObject t_Friend = Instantiate (myFriend, t_position, Quaternion.identity) as GameObject;
			myFriendList.Add (t_Friend);
		}
			
		for (int time = 0; time < 1000; time++) {
			if (myFriendList.Count < myFriendAmount) {
				//creat a position
				Vector3 t_position = new Vector3 (
					Random.Range (-myFriendPosition.x, myFriendPosition.x), 
					Random.Range (-myFriendPosition.y, myFriendPosition.y),
					0f
				);
				//check if it's at a good position
				bool isGood = true;
				//check if it's too close to other friends
				isGood = CheckIfFarEnough (t_position, myFriendList, myFriendDistance);

				//check if it's too close to other stations
				if (isGood)
					isGood = CheckIfFarEnough (t_position, myStationList, myFriendDistance);

				if (isGood)
					isGood = CheckIfFarEnoughLine (t_position, myStationList, myFriendDistance);

				//check if it's too close to other trees
				if (isGood)
					isGood = CheckIfFarEnough (t_position, myTreeList, myFriendDistance);

				if (isGood) {
					GameObject t_station = Instantiate (myFriend, t_position, Quaternion.identity) as GameObject;
					myFriendList.Add (t_station);
				}
			} else {
				Debug.Log ("InitStation times : " + time + "; Count : " + myFriendList.Count);
				break;
			}
		}
	}

	private void InitWorker () {
		//create wokers target
		for (int i = 0; i < mySiteList.Count; i++) {
			myWorkerTargetList.Add ((Vector3)mySiteList [i].transform.position);
		}

		//create workers everywhere
		for (int i = 0; i < myWorkerAmount;  i++) {
			Vector3 t_position = new Vector3 (
				Random.Range (-myWorkerPosition.x, myWorkerPosition.x), 
				Random.Range (-myWorkerPosition.y, myWorkerPosition.y)
			);
			GameObject t_worker = Instantiate (myWorker, t_position, Quaternion.identity) as GameObject;
			t_worker.GetComponent<CS_Worker> ().InitMyTargetList (myWorkerTargetList);
			t_worker.GetComponent<CS_Worker> ().InitMyTargetList (myWorkerTargetList);
			myWorkerList.Add (t_worker);
		}
	}

	private bool CheckIfFarEnough (Vector3 g_position, List<GameObject> g_list, float g_distance) {
		for (int i = 0; i < g_list.Count; i++) {
			if (Vector3.Distance (g_list [i].transform.position, g_position) < g_distance) {
				return false;
			}
		}
		return true;
	}

	private bool CheckIfFarEnoughLine (Vector3 g_position, List<GameObject> g_list, float g_distance) {
		if (g_list.Count < 2)
			return true;
		
		for (int i = 0; i < g_list.Count; i++) {
			int t_numb = i + 1;
			if (t_numb >= g_list.Count)
				t_numb -= g_list.Count;
			if (CS_Global.DistanceToLine(g_list[i].transform.position, g_list[t_numb].transform.position, g_position) < g_distance) {
				return false;
			}
		}
		return true;
	}
	// Update is called once per frame


	void Update () {

		Timer += Time.deltaTime;

		if (Score - Timer > ScoreTotal){
			ScoreTotal = Score - Timer;
			TX_Score.GetComponent<TextMesh> ().text = ScoreTotal.ToString ("0");
		}

		natureTotal = TreeScore + FriendScore;
		cityTotal = (StationScore * 5) + (SiteScore * 5);
		ScoreTotal = (float) natureTotal + cityTotal;
		cityScale = (float) cityTotal / ScoreTotal;
	}

	public void FindASite () {
		mySiteFoundAmount++;

		this.GetComponent<CS_PlaySFX> ().PlaySFX (mySiteFoundAmount - 1);

		float t_size;
		if (mySiteFoundAmount >= mySiteAmount) {
			t_size = CS_Global.CAMERA_SIZE_MAX;
			Camera.main.GetComponent<CS_Camera> ().SetIsClear (true);

			float t_min = Timer / 60;
			float t_sec = Timer % 60;
			TX_Timer.GetComponent<TextMesh> ().text = t_min.ToString ("0") + ":" + t_sec.ToString ("00");
			ShowInfo ();
		}
		else
			t_size =CS_Global.CAMERA_SIZE_DEFAULT + (CS_Global.CAMERA_SIZE_MAX - CS_Global.CAMERA_SIZE_DEFAULT) * 0.5f * mySiteFoundAmount / mySiteAmount;
		Camera.main.GetComponent<CS_Camera> ().SetSize (t_size);
	}

	public void ShowInfo () {
		TX_Timer.SetActive (true);
		TX_Score.SetActive (true);
	}

	public void HideInfo () {
		TX_Timer.SetActive (false);
		TX_Score.SetActive (false);
	}

	public void ShowPause () {
		UI_Pause.SetActive (true);
		Time.timeScale = 0;
	}

	public void HidePause () {
		UI_Pause.SetActive (false);
		Time.timeScale = 1;
	}

	public void AddScore (int g_score) {
		Score += g_score;
	}

	public void AddFriendScore () {
		FriendScore ++;

	}

	public void AddTreeScore () {
		TreeScore++;
	}

	public void AddStationScore () {
		StationScore++;
	}

	public void AddSiteScore () {
		SiteScore++;
	}
}
