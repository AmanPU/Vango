using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModifyLength : ModifySofa
{

    public GameObject _leftPillow;
    public GameObject _rightPillow;


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

        minLimit = -10;
        maxLimit = 10;
    }

    protected override void OnPlusButtonClicked()
    {
        modifications++;
        if (IsModificationAllowed())
        {
            base.OnPlusButtonClicked();


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
        else {
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
