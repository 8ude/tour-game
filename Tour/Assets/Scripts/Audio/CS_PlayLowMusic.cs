using UnityEngine;
using System.Collections;

public class CS_PlayLowMusic : MonoBehaviour {
	[SerializeField] AudioClip[] lowClips;
	//int index = 0;
	public 	AudioSource thisSource;
	public AudioClip nextClip;

	public CS_LoadStage loadStage;
	public float volumeLevel;
	public float maxVolume = 0.7f;
	int index = 0;

	public int sites;
	public int sitesLevelMid, sitesLevelHi, sitesLevelMax;

	void Start() {

		nextClip = lowClips [index];

		loadStage = GameObject.Find (CS_Global.NAME_LOADSTAGE).GetComponent<CS_LoadStage> ();
		thisSource = gameObject.GetComponent<AudioSource> ();
		thisSource.volume = 0f;
	}
	void Update() {
		int prevSites = sites;
		sites = loadStage.SiteScore;

		if (prevSites < sites) {
			IncreaseSites ();
		}

	}

	void IncreaseSites () {

		if (sites == 1) {

			StartCoroutine (FadeVolume ());


		} else if (sites == sitesLevelMid) {

			index = 1;
			nextClip = lowClips [index];
			StartCoroutine(NextClip ());

		} else if (sites == sitesLevelHi) {
			index = 2;
			nextClip = lowClips [index];
			StartCoroutine(NextClip ());

		} else if (sites == sitesLevelMax) {
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
