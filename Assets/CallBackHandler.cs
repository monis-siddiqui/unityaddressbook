using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CallBackHandler : MonoBehaviour {

	public GameObject SuccessPopup;
	public static GameObject SuccessPopup2;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnCallFromSwift(string message) {
		Debug.Log("OnCallFromSwift is called with message: "  + message);
		SuccessPopup.SetActive (true);
	}


		
}
