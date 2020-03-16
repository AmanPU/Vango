using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModifyDepth : ModifySofa
{

    const float BACK_POSITION_MODIFIER = 0.0038f;
    const float DEPTH_OFFSET = 0.6f;
    Vector3 _backPositionModifierVector;
    protected override void OnEnable()
    {
        base.OnEnable();
        GetComponent<RotateForDepth>().enabled = true;
    }

    protected override void Start()
    {
        base.Start();
        _scaleModifierVector = Vector3.up * SCALE_MODIFIER;
        _backPositionModifierVector = Vector3.down * BACK_POSITION_MODIFIER;
    }



    protected override void OnPlusButtonClicked()
    {
        base.OnPlusButtonClicked();
        for (int i = 0; i < _backs.Length; i++)
        {
            _backs[i].transform.localPosition += _backPositionModifierVector;
        }
        

        for (int i = 0; i < _seats.Length; i++)
        {
            _seats[i].transform.localPosition += _backPositionModifierVector;
            _seats[i].transform.localScale += _scaleModifierVector * DEPTH_OFFSET;
        }

        
    }

    protected override void OnMinusButtonClicked()
    {
        base.OnMinusButtonClicked();
        for (int i = 0; i < _backs.Length; i++)
        {
            _backs[i].transform.localPosition -= _backPositionModifierVector;
        }


        for (int i = 0; i < _seats.Length; i++)
        {
            _seats[i].transform.localPosition -= _backPositionModifierVector;
            _seats[i].transform.localScale -= _scaleModifierVector * DEPTH_OFFSET;
        }
    }

    protected override void OnDisable()
    {
        base.OnDisable();
        GetComponent<RotateForDepth>().enabled = false;
    }
}
