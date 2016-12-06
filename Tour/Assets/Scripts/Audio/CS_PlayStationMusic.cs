using UnityEngine;
using System.Collections;

public class CS_PlayStationMusic : MonoBehaviour {
	[SerializeField] AudioClip[] stationClips;
	//int index = 0;
	public 	AudioSource thisSource;
	public AudioClip nextClip;

	public CS_GameManager gameMan;
	public float volumeLevel;
	public float maxVolume = 0.7f;
	int index = 0;

	public int stations;
	public int stationLevelMid, stationLevelHi, stationLevelMax;

	void Start() {

		nextClip = stationClips [index];

		gameMan = GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ();
		thisSource = gameObject.GetComponent<AudioSource> ();
		thisSource.volume = 0f;
	}
	void Update() {
		int prevStations = stations;
		stations = gameMan.numStations;

		if (prevStations < stations) {
			IncreaseStations ();
		}

	}

	void IncreaseStations () {

		if (stations == 1) {

			StartCoroutine (FadeVolume ());


		} else if (stations == stationLevelMid) {

			index = 1;
			nextClip = stationClips [index];
			StartCoroutine(NextClip ());

		} else if (stations == stationLevelHi) {
			index = 2;
			nextClip = stationClips [index];
			StartCoroutine(NextClip ());

		} else if (stations == stationLevelMax) {
			index = 3;
			nextClip = stationClips [index];
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
