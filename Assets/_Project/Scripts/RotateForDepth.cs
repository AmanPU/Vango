using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateForDepth : MonoBehaviour {

	Vector3 rotationAngleForDepth = new Vector3(-90f, 90f, 0f);

	// Use this for initialization
	void OnEnable() {

		LeanTween.rotate(gameObject, rotationAngleForDepth , 1f).setEaseOutBack();
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
