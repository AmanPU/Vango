using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackHeightSizeDisplayer : SizeDisplayer {

	// Use this for initialization
	protected override void Start () {
		base.Start();
        length = 15f;
    
	}


    protected override void OnDownScale(Vector3 size)
    {
        Vector3 invertedSize = new Vector3(size.z, 0f, 0f);
        gameObject.transform.localScale -= invertedSize * LengthSizeOffset;
        length -= lengthIncrement;

        text.text = length.ToString("0.0") + "\"";
    }

    protected override void OnUpScale(Vector3 size) {
        Vector3 invertedSize = new Vector3(size.z, 0f, 0f);
        gameObject.transform.localScale += invertedSize * LengthSizeOffset;
        length += lengthIncrement;

        text.text = length.ToString("0.0") + "\"";
    }
	
}
