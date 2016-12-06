using UnityEngine;
using System.Collections;
using UnityEngine.Audio;

public class CS_PlayFriendMusic : MonoBehaviour {
	[SerializeField] AudioClip[] friendClips;
	//int index = 0;
	public 	AudioSource thisSource;
	public AudioClip nextClip;

	public CS_GameManager gameMan;
	public float volumeLevel;
	public float maxVolume = 0.5f;
	int index = 0;

	public int friends;
	public int friendsLevelMid, friendsLevelHi, friendsLevelMax;

	void Start() {

		nextClip = friendClips [index];

		gameMan = GameObject.Find (CS_Global.NAME_GAMEMANAGER).GetComponent<CS_GameManager> ();
		thisSource = gameObject.GetComponent<AudioSource> ();
		thisSource.volume = 0f;
	}
	void Update() {
		int prevFriends = friends;
		friends = gameMan.numFriends;

		if (prevFriends < friends) {
			IncreaseFriends ();
		}

	}

	void IncreaseFriends () {

		if (friends == 1) {

			StartCoroutine (FadeVolume ());


		} else if (friends == friendsLevelMid) {

			index = 1;
			nextClip = friendClips [index];
			StartCoroutine(NextClip ());

		} else if (friends == friendsLevelHi) {
			index = 2;
			nextClip = friendClips [index];
			StartCoroutine(NextClip ());

		} else if (friends == friendsLevelMax) {
			index = 3;
			nextClip = friendClips [index];
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
