using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModifyDepth : ModifySofa
{

    const float BACK_POSITION_MODIFIER = 0.0038f;
    const float DEPTH_OFFSET = 0.6f;


    Vector3 _backPositionModifierVector;



    private void OnEnable()
    {
        GetComponent<RotateForDepth>().enabled = true;

        UI.GetComponent<ModifySofaUI>().onMinusButtonClicked += OnMinusButtonClicked;
        UI.GetComponent<ModifySofaUI>().onPlusButtonClicked += OnPlusButtonClicked;
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

        _leftBack.transform.localPosition += _backPositionModifierVector;
        _rightBack.transform.localPosition += _backPositionModifierVector;

        _leftSeat.transform.localPosition += _backPositionModifierVector;
        _rightSeat.transform.localPosition += _backPositionModifierVector;

        _leftSeat.transform.localScale += _scaleModifierVector * DEPTH_OFFSET;
        _rightSeat.transform.localScale += _scaleModifierVector * DEPTH_OFFSET;

    }

    protected override void OnMinusButtonClicked()
    {
        base.OnMinusButtonClicked();

        _leftBack.transform.localPosition -= _backPositionModifierVector;
        _rightBack.transform.localPosition -= _backPositionModifierVector;

        _leftSeat.transform.localPosition -= _backPositionModifierVector;
        _rightSeat.transform.localPosition -= _backPositionModifierVector;

        _leftSeat.transform.localScale -= _scaleModifierVector * DEPTH_OFFSET;
        _rightSeat.transform.localScale -= _scaleModifierVector * DEPTH_OFFSET;
    }

    private void OnDisable()
    {
        GetComponent<RotateForDepth>().enabled = false;
        UI.GetComponent<ModifySofaUI>().onMinusButtonClicked -= OnMinusButtonClicked;
        UI.GetComponent<ModifySofaUI>().onPlusButtonClicked -= OnPlusButtonClicked;
    }
}
