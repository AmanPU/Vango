using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LengthSizeDisplayer : SizeDisplayer {

    public ModifyArmWidth modifyArmWidth;

    // Use this for initialization
    protected override void Start () {
		base.Start();

        modifyArmWidth.onDownScale = OnArmWidthDownScale;
        modifyArmWidth.onUpScale = OnArmWidthUpScale;
    }

    protected void OnArmWidthDownScale(Vector3 size)
    {
        gameObject.transform.localScale -= size * LengthSizeOffset * 1.2f;
        length -= lengthIncrement;

        text.text = length.ToString("0.0") + "\"";
    }

    protected  void OnArmWidthUpScale(Vector3 size)
    {
        gameObject.transform.localScale += size * LengthSizeOffset * 1.2f;
        length += lengthIncrement;

        text.text = length.ToString("0.0") + "\"";
    }
}
