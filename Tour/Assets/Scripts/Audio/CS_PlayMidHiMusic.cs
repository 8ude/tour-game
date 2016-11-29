using UnityEngine;
using System.Collections;

public class CS_PlayMidHiMusic : MonoBehaviour {
	/// <summary>
	/// Controls Mid-Hi range music, changes based
	/// on number of trees activated
	/// </summary>

	[SerializeField] AudioClip[] midHiClips;
	//int index = 0;
	public 	AudioSource thisSource;
	public AudioClip nextClip;
	public CS_LoadStage loadStage;
	public float volumeLevel;
	public float maxVolume = 0.3f;
	int index = 0;

	public int trees;
	public int treesLevelMid, treesLevelHi, treesLevelMax;

	void Start() {

		nextClip = midHiClips [index];
		loadStage = GameObject.Find (CS_Global.NAME_LOADSTAGE).GetComponent<CS_LoadStage> ();
		thisSource = gameObject.GetComponent<AudioSource> ();
		thisSource.volume = 0f;
	}
	void Update() {
		int prevTrees = trees;
		trees = loadStage.TreeScore;

		if (prevTrees < trees) {
			IncreaseTrees ();
		}

	}

	void IncreaseTrees () {

		if (trees == 1) {

			StartCoroutine (FadeVolume ());


		} else if (trees == treesLevelMid) {

			index = 1;
			nextClip = midHiClips [index];
			StartCoroutine(NextClip ());

		} else if (trees == treesLevelHi) {
			index = 2;
			nextClip = midHiClips [index];
			StartCoroutine(NextClip ());

		} else if (trees == treesLevelMax) {
			index = 3;
			nextClip = midHiClips [index];
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
