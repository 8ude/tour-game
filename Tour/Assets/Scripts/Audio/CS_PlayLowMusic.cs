using UnityEngine;
using System.Collections;

public class CS_PlayLowMusic : MonoBehaviour {
	[SerializeField] AudioClip[] lowClips;
	//int index = 0;
	public 	AudioSource thisSource;
	public AudioClip nextClip;

	public CS_GameManager gameMan;
	public float volumeLevel;
	public float maxVolume = 0.7f;
	int index = 0;

	public int bigTrees;
	public int bigTLevelMid, bigTLevelHi, bigTLevelMax;

	void Start() {

		nextClip = lowClips [index];

		gameMan = GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ();
		thisSource = gameObject.GetComponent<AudioSource> ();
		thisSource.volume = 0f;
	}
	void Update() {
		int prevBigTrees = bigTrees;
		bigTrees = gameMan.BigTreeScore;

		if (prevBigTrees < bigTrees) {
			IncreaseBigTrees ();
		}

	}

	void IncreaseBigTrees () {

		if (bigTrees == 1) {

			StartCoroutine (FadeVolume ());


		} else if (bigTrees == bigTLevelMid) {

			index = 1;
			nextClip = lowClips [index];
			StartCoroutine(NextClip ());

		} else if (bigTrees == bigTLevelHi) {
			index = 2;
			nextClip = lowClips [index];
			StartCoroutine(NextClip ());

		} else if (bigTrees == bigTLevelMax) {
			index = 3;
			nextClip = lowClips [index];
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
