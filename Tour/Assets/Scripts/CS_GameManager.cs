﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class CS_GameManager : MonoBehaviour {

	public GameObject city;
	public List<GameObject> preObjects;

	public int numTrees, numBigTrees, numFriends, numBuildings, numBigBuildings, numStations;

	public int FriendScore, TreeScore, BigTreeScore, StationScore, BuildingScore, BigBuildingScore;

	public int MaxScore = 100;
	public float ScoreTotal = 0;
	bool _atMaxScore;

	int natureTotal = 0;
	int cityTotal = 0;

	public float minCameraSize = 10f;
	public float maxCameraSize = 100f;

	// 0.0 = nature
	// 1.0 = city 
	public float cityScale = 0.5f;


	// Use this for initialization
	void Start () {

		numTrees = 0;
		numBigTrees = 0;
		numFriends = 0;
		numBuildings = 0;
		numBigBuildings = 0;
		numStations = 0;
		ScoreTotal = 0;
		_atMaxScore = false;

		preObjects = new List<GameObject>();
	
	}
	
	// Update is called once per frame
	void Update () {

		preObjects.Clear ();

		if (ScoreTotal >= MaxScore) {
			_atMaxScore = true;
		}

		GameObject[] preBuildings;

		preBuildings = GameObject.FindGameObjectsWithTag ("PreBuilding");


		for (int i = 0; i < preBuildings.Length; i++) {
			preObjects.Add(preBuildings[i]);
		}

		GameObject[] preTrees;

		preTrees = GameObject.FindGameObjectsWithTag ("PreTree");

		if (preBuildings.Length == 0 && !_atMaxScore) {
			city.SendMessage ("GeneratePreBuilding");
			//if there is more than one pre tree, destroy it upon activating a city
			//segment
			if (preTrees.Length > 1) {

				Destroy (preTrees [preTrees.Length - 1]);
			}
		}

		for (int i = 0; i < preTrees.Length; i++) {
			preObjects.Add (preTrees [i]);
		}

		if (_atMaxScore) {
			// destroy all preSites if we're at max score
			foreach (GameObject preObject in preObjects) {
				Destroy (preObject);

			}
		}




		//update scores and adjust scaling accordingly
		natureTotal = (TreeScore * numTrees) + (FriendScore * numFriends) + (BigTreeScore * numBigTrees);
		cityTotal = (StationScore * numStations) + (BuildingScore * numBuildings) + (BigBuildingScore * numBigBuildings);
		ScoreTotal = (float) natureTotal + cityTotal;
		cityScale = (float) cityTotal / ScoreTotal;
		IncreaseCameraSize ();
			
	}

	//Methods for Adding Scores, called by CS_AddScore at Start when object is instantiated


	public void AddFriendScore () {
		numFriends++;
	}

	public void AddTreeScore () {
		numTrees++;
	}

	public void AddBigTreeScore() {
		numBigTrees++;
	}

	public void AddStationScore () {
		numStations++;
	}

	public void AddBuildingScore() {
		numBuildings++;
	}

	public void AddBigBuildingScore() {
		numBigBuildings++;
	}

	public void IncreaseCameraSize() {

		float t_size = (float)(ScoreTotal / MaxScore) * maxCameraSize + minCameraSize;

		Camera.main.GetComponent<CS_Camera> ().SetSize (t_size);

	}
}
