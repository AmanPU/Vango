using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArmDepthSizeDisplayer : SizeDisplayer {

    public ModifyDepth modifyDepth;

	// Use this for initialization
	protected override void Start () {
		base.Start();

        length = 25f;

		modifyDepth.onUpScale = OnDepthUpScale;
		modifyDepth.onDownScale = OnDepthDownScale;

        gameObject.SetActive(false);
	}

    private void OnDepthDownScale(Vector3 size)
    {
        gameObject.transform.localScale += size * LengthSizeOffset;
        length -= lengthIncrement;

        text.text = length.ToString("0.0") + "\"";
    }

    private void OnDepthUpScale(Vector3 size)
    {
        gameObject.transform.localScale -= size * LengthSizeOffset;
        length += lengthIncrement;

        text.text = length.ToString("0.0") + "\"";
    }

    // Update is called once per frame
    void Update () {
		
	}
}
