﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModifyArmWidth : ModifySofa {


    const float ARM_OFFSET = 1.5f;
    protected override void OnEnable()
    {
        base.OnEnable();
        GetComponent<RotateForLength>().enabled = true;
    }

    protected override void Start()
    {
        base.Start();    
        _scaleModifierVector = Vector3.right * SCALE_MODIFIER * ARM_OFFSET;
        _positionModifierVector = Vector3.right * POSITION_MODIFIER * ARM_OFFSET;
    }

    protected override void OnPlusButtonClicked()
    {
        base.OnPlusButtonClicked();
        _leftArm.transform.localPosition += _positionModifierVector;
        _rightArm.transform.localPosition -= _positionModifierVector;
    }

    protected override void OnMinusButtonClicked()
    {
        base.OnMinusButtonClicked();
        _leftArm.transform.localPosition -= _positionModifierVector;
        _rightArm.transform.localPosition += _positionModifierVector;
    }

    protected override void OnDisable()
    {
        base.OnDisable();
        GetComponent<RotateForLength>().enabled = false;
    }
}