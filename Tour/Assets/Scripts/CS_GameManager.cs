using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class CS_GameManager : MonoBehaviour {

	public GameObject city;
	public int FriendScore, TreeScore, StationScore, SiteScore, BuildingScore;

	public int Score = 0;
	public int MaxScore = 100;
	public float ScoreTotal = 0;

	int natureTotal = 0;
	int cityTotal = 0;

	public float minCameraSize = 10f;
	public float maxCameraSize = 100f;

	// 0.0 = nature
	// 1.0 = city 
	public float cityScale = 0.5f;


	// Use this for initialization
	void Start () {

		FriendScore = 0;
		TreeScore = 0;
		StationScore = 0;
		SiteScore = 0;
		BuildingScore = 0;
		ScoreTotal = 0;
	
	}
	
	// Update is called once per frame
	void Update () {

		GameObject[] preBuildings;
		preBuildings = GameObject.FindGameObjectsWithTag ("PreBuilding");
		if (preBuildings.Length == 0) {
			city.SendMessage ("GeneratePreBuilding");
		}

		natureTotal = TreeScore + FriendScore;
		cityTotal = StationScore + BuildingScore;
		ScoreTotal = (float) natureTotal + cityTotal;
		cityScale = (float) cityTotal / ScoreTotal;
		IncreaseCameraSize ();
			
	}

	public void AddScore (int g_score) {
		Score += g_score;
	}

	public void AddFriendScore (int g_score) {
		FriendScore += g_score;
	}

	public void AddTreeScore (int g_score) {
		TreeScore+= g_score;
	}

	public void AddStationScore (int g_score) {
		StationScore+= g_score;
	}

	public void AddSiteScore (int g_score) {
		SiteScore+= g_score;
	}

	public void AddBuildingScore(int g_score) {
		BuildingScore+= g_score;
	}

	public void IncreaseCameraSize() {

		float t_size = (float)(ScoreTotal / MaxScore) * maxCameraSize + minCameraSize;

		Camera.main.GetComponent<CS_Camera> ().SetSize (t_size);

	}
}
