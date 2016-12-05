using UnityEngine;
using System.Collections;
using UnityEngine.Audio;

public class CS_PlayBigBuildingMusic : MonoBehaviour {
	[SerializeField] AudioClip[] bigBClips;
	//int index = 0;
	public 	AudioSource thisSource;
	public AudioClip nextClip;

	public CS_GameManager gameMan;
	public float volumeLevel;
	public float maxVolume = 0.5f;
	int index = 0;

	public int bigBuildings;
	public int bigBLevelMid, bigBLevelHi, bigBLevelMax;

	void Start() {

		nextClip = bigBClips [index];

		gameMan = GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ();
		thisSource = gameObject.GetComponent<AudioSource> ();
		thisSource.volume = 0f;
	}
	void Update() {
		int prevBigBuildings = bigBuildings;
		bigBuildings = gameMan.numBigBuildings;

		if (prevBigBuildings < bigBuildings) {
			IncreaseBigBuildings ();
		}

	}

	void IncreaseBigBuildings () {

		if (bigBuildings == 1) {

			StartCoroutine (FadeVolume ());


		} else if (bigBuildings == bigBLevelMid) {

			index = 1;
			nextClip = bigBClips [index];
			StartCoroutine(NextClip ());

		} else if (bigBuildings == bigBLevelHi) {
			index = 2;
			nextClip = bigBClips [index];
			StartCoroutine(NextClip ());

		} else if (bigBuildings == bigBLevelMax) {
			index = 3;
			nextClip = bigBClips [index];
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
