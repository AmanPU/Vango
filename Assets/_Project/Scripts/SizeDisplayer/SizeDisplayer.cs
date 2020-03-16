using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SizeDisplayer : MonoBehaviour {
    protected float lengthIncrement = 0.1f;
    public ModifySofa modifySofa;
    public Text text;
    protected float length = 66f;

    protected float LengthSizeOffset = 12f;
    private void OnEnable()
    {
        modifySofa.onUpScale += OnUpScale;
        modifySofa.onDownScale += OnDownScale;
    }

    // Use this for initialization
    protected virtual void  Start () {
       
		
	}

    protected virtual void OnDownScale(Vector3 size)
    {
        gameObject.transform.localScale += size * LengthSizeOffset;
        length -= lengthIncrement;

        text.text = length.ToString("0.0") + "\"";
    }

    protected virtual void OnUpScale(Vector3 size)
    {
        gameObject.transform.localScale -= size * LengthSizeOffset;
        length += lengthIncrement;

        text.text = length.ToString("0.0") + "\"";
    }

    private void OnDisable()
    {
        modifySofa.onUpScale -= OnUpScale;
        modifySofa.onDownScale -= OnDownScale;
    }

}
