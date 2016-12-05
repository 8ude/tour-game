using UnityEngine;
using System.Collections;

public class CS_PlayBigTreeMusic : MonoBehaviour {
	[SerializeField] AudioClip[] bigTClips;
	//int index = 0;
	public 	AudioSource thisSource;
	public AudioClip nextClip;

	public CS_GameManager gameMan;

	int index = 0;

	public int bigTrees;
	public int bigTLevelMid, bigTLevelHi, bigTLevelMax;

	void Start() {

		nextClip = bigTClips [index];

		gameMan = GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ();
		thisSource = gameObject.GetComponent<AudioSource> ();
		thisSource.volume = 0.6f;
	}
	void Update() {
		int prevBigTrees = bigTrees;
		bigTrees = gameMan.numBigTrees;

		if (prevBigTrees < bigTrees) {
			IncreaseBigTrees ();
		}

	}

	void IncreaseBigTrees () {

		if (bigTrees == bigTLevelMid) {

			index = 1;
			nextClip = bigTClips [index];
			StartCoroutine(NextClip ());

		} else if (bigTrees == bigTLevelHi) {
			index = 2;
			nextClip = bigTClips [index];
			StartCoroutine(NextClip ());

		} else if (bigTrees == bigTLevelMax) {
			index = 3;
			nextClip = bigTClips [index];
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
