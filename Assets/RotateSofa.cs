using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateSofa : MonoBehaviour {

	float speed = 0.3f;

	// Use this for initialization
	void Start () {
		
	}

    Vector3 sofaRotation;

    private void OnEnable()
    {
        sofaRotation = transform.eulerAngles;
    }

    // Update is called once per frame
    void Update () {
		transform.Rotate(Vector3.forward * speed);
	}

    private void OnDisable()
    {
        transform.eulerAngles = sofaRotation;
    }

}
