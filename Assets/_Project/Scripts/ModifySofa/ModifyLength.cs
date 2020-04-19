using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModifyLength : ModifySofa
{

    public GameObject _leftPillow;
    public GameObject _rightPillow;


    public GameObject sofabase;
    float baseOffset = 0.875f;

    public GameObject[] leftLegs;

    public GameObject[] rightLegs;
    protected override void OnEnable()
    {
        base.OnEnable();
        GetComponent<RotateForLength>().enabled = true;
    }

    protected override void Start()
    {

        base.Start();
        _scaleModifierVector = Vector3.right * SCALE_MODIFIER;
        _positionModifierVector = Vector3.right * POSITION_MODIFIER;

        minLimit = -20;
        maxLimit = 50;
    }

    protected override void OnPlusButtonClicked()
    {
        modifications++;
        if (IsModificationAllowed())
        {
            base.OnPlusButtonClicked();


            sofabase.transform.localScale += _scaleModifierVector * baseOffset;

            for (int i = 0; i < leftLegs.Length; i++)
            {
                leftLegs[i].transform.localPosition -= _positionModifierVector;
                rightLegs[i].transform.localPosition += _positionModifierVector;
            }
            _leftArm.transform.localPosition -= _positionModifierVector;
            _leftPillow.transform.localPosition -= _positionModifierVector;
            _rightArm.transform.localPosition += _positionModifierVector;
            _rightPillow.transform.localPosition += _positionModifierVector;


        }
        else
        {
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

            sofabase.transform.localScale -= _scaleModifierVector * baseOffset;

            for (int i = 0; i < leftLegs.Length; i++)
            {
                leftLegs[i].transform.localPosition += _positionModifierVector;
                rightLegs[i].transform.localPosition -= _positionModifierVector;
            }

            _leftArm.transform.localPosition += _positionModifierVector;
            _leftPillow.transform.localPosition += _positionModifierVector;

            _rightArm.transform.localPosition -= _positionModifierVector;
            _rightPillow.transform.localPosition -= _positionModifierVector;
        }
        else
        {
            modifications++;
            vango.invalidTaskInvoked();
        }
    }




    protected override void OnDisable()
    {
        base.OnDisable();
        GetComponent<RotateForLength>().enabled = false;
    }
}
