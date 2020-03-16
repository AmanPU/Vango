using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArmWidthSizeDisplayer : SizeDisplayer {

	// Use this for initialization
	protected override void Start () {
		base.Start();
		length = 5f;
		lengthIncrement = 0.05f;
		LengthSizeOffset = -2f;

	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
