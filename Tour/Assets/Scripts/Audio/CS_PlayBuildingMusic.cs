using UnityEngine;
using System.Collections;
using UnityEngine.Audio;

public class CS_PlayBuildingMusic : MonoBehaviour {
	[SerializeField] AudioClip[] buildingClips;
	//int index = 0;
	public 	AudioSource thisSource;
	public AudioClip nextClip;

	public CS_GameManager gameMan;
	public float volumeLevel;
	public float maxVolume = 0.5f;
	int index = 0;

	public int buildings;
	public int buildingLevelMid, buildingLevelHi, buildingLevelMax;

	void Start() {

		nextClip = buildingClips [index];

		gameMan = GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ();
		thisSource = gameObject.GetComponent<AudioSource> ();
		thisSource.volume = 0f;
	}
	void Update() {
		int prevBuildings = buildings;
		buildings = gameMan.numBuildings;
		//friends = gameMan.numFriends;

		if (prevBuildings < buildings) {
			IncreaseBuildings();
		}

	}

	void IncreaseBuildings () {

		if (buildings == 1) {

			StartCoroutine (FadeVolume ());


		} else if (buildings == buildingLevelMid) {

			index = 1;
			nextClip = buildingClips [index];
			StartCoroutine(NextClip ());

		} else if (buildings == buildingLevelHi) {
			index = 2;
			nextClip = buildingClips [index];
			StartCoroutine(NextClip ());

		} else if (buildings == buildingLevelMax) {
			index = 3;
			nextClip = buildingClips [index];
			StartCoroutine(NextClip ());
		}

	}

	public IEnumerator NextClip() {

		//audio.Play();
		yield return new WaitForSeconds(thisSource.clip.length - thisSource.time);
		thisSource.clip = nextClip;
		thisSource.Play();

	}

	public IEnumerator FadeVolume () {
		for (float f = 0f; f <= maxVolume; f += (maxVolume/200f)) {
			thisSource.volume = f;
			yield return null;
		}
	}



}
