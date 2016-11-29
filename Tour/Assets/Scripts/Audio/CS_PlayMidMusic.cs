using UnityEngine;
using System.Collections;

public class CS_PlayMidMusic : MonoBehaviour {
	[SerializeField] AudioClip[] midClips;
	//int index = 0;
	public 	AudioSource thisSource;
	public AudioClip nextClip;

	public CS_LoadStage loadStage;

	int index = 0;

	public int stations;
	public int stationsLevelMid, stationsLevelHi, stationsLevelMax;

	void Start() {

		nextClip = midClips [index];

		loadStage = GameObject.Find (CS_Global.NAME_LOADSTAGE).GetComponent<CS_LoadStage> ();
		thisSource = gameObject.GetComponent<AudioSource> ();
		thisSource.volume = 0.6f;
	}
	void Update() {
		int prevStations = stations;
		stations = loadStage.StationScore;

		if (prevStations < stations) {
			IncreaseStations ();
		}

	}

	void IncreaseStations () {

		if (stations == stationsLevelMid) {

			index = 1;
			nextClip = midClips [index];
			StartCoroutine(NextClip ());

		} else if (stations == stationsLevelHi) {
			index = 2;
			nextClip = midClips [index];
			StartCoroutine(NextClip ());

		} else if (stations == stationsLevelMax) {
			index = 3;
			nextClip = midClips [index];
			StartCoroutine(NextClip ());
		}

	}

	public IEnumerator NextClip() {

		//audio.Play();
		yield return new WaitForSeconds(thisSource.clip.length - thisSource.time);
		thisSource.clip = nextClip;
		thisSource.Play();

	}



}
