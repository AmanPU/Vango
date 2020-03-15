using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModifyLength : ModifySofa
{




    private void OnEnable()
    {
        GetComponent<RotateForLength>().enabled = true;

        UI.GetComponent<ModifySofaUI>().onMinusButtonClicked += OnMinusButtonClicked;
        UI.GetComponent<ModifySofaUI>().onPlusButtonClicked += OnPlusButtonClicked;
    }

    protected override void Start()
    {

        base.Start();

        

        _scaleModifierVector = Vector3.right * SCALE_MODIFIER;
        _positionModifierVector = Vector3.right * POSITION_MODIFIER;
    }



    protected override void OnPlusButtonClicked()
    {
        base.OnPlusButtonClicked();

        _leftArm.transform.localPosition -= _positionModifierVector;
        _rightArm.transform.localPosition += _positionModifierVector;
    }

    protected override void OnMinusButtonClicked()
    {
        base.OnMinusButtonClicked();

        _leftArm.transform.localPosition += _positionModifierVector;
        _rightArm.transform.localPosition -= _positionModifierVector;
    }

    private void OnDisable()
    {
        GetComponent<RotateForLength>().enabled = false;
        UI.GetComponent<ModifySofaUI>().onMinusButtonClicked -= OnMinusButtonClicked;
        UI.GetComponent<ModifySofaUI>().onPlusButtonClicked -= OnPlusButtonClicked;
    }
}
