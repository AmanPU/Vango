using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModifyArmDepth : ModifySofa
{



    const float ARM_SCALE_OFFSET = 1.5f;
    const float ARM_POSITION_OFFSET = -0.7f;

    public GameObject[] frontLegs;

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

        minLimit = -10;
        maxLimit = 0;
    }



    protected override void OnPlusButtonClicked()
    {
        modifications++;
        if (IsModificationAllowed())
        {
            base.OnPlusButtonClicked();
            for (int i = 0; i < frontLegs.Length; i++)
            {
                frontLegs[i].transform.localPosition -= _positionModifierVector * 2.2f;
            }
            _leftArm.transform.localPosition -= _positionModifierVector;
            _rightArm.transform.localPosition -= _positionModifierVector;
        }
        else {
            modifications--;
            vango.invalidTaskInvoked(); 
        }
    }

    protected override void OnMinusButtonClicked()
    {
        modifications--;
        if (IsModificationAllowed())
        {
            base.OnMinusButtonClicked();

            for (int i = 0; i < frontLegs.Length; i++)
            {
                frontLegs[i].transform.localPosition += _positionModifierVector * 2.2f;
            }

            _leftArm.transform.localPosition += _positionModifierVector;
            _rightArm.transform.localPosition += _positionModifierVector;
        }
        else {
            modifications++;
            vango.invalidTaskInvoked();
        }
    }

    protected override void OnDisable()
    {
        base.OnDisable();
        GetComponent<RotateForDepth>().enabled = false;  
    }
}