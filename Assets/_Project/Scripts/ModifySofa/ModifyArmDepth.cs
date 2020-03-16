using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModifyArmDepth : ModifySofa
{



    const float ARM_SCALE_OFFSET = 1.5f;
    const float ARM_POSITION_OFFSET = -0.7f;

    protected override void OnEnable()
    {
        base.OnEnable();
        GetComponent<RotateForDepth>().enabled = true;
    }

    protected override void Start()
    {
        base.Start();
        _scaleModifierVector = Vector3.up * SCALE_MODIFIER * ARM_SCALE_OFFSET;
        _positionModifierVector = Vector3.up * POSITION_MODIFIER * ARM_POSITION_OFFSET;
    }



    protected override void OnPlusButtonClicked()
    {
        base.OnPlusButtonClicked();

        _leftArm.transform.localPosition -= _positionModifierVector;
        _rightArm.transform.localPosition -= _positionModifierVector;
    }

    protected override void OnMinusButtonClicked()
    {
        base.OnMinusButtonClicked();

        _leftArm.transform.localPosition += _positionModifierVector;
        _rightArm.transform.localPosition += _positionModifierVector;
    }

    protected override void OnDisable()
    {
        base.OnDisable();
        GetComponent<RotateForDepth>().enabled = false;  
    }
}