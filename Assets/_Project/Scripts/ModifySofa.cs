using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModifySofa : MonoBehaviour
{

    public GameObject UI;

    public GameObject[] _gameObjectsToModifyAlong;

    public GameObject _leftArm;
    public GameObject _rightArm;

    public GameObject _leftBack;
    public GameObject _rightBack;

    public GameObject _leftSeat;
    public GameObject _rightSeat;



    protected const float SCALE_MODIFIER = 0.0001f;
    protected const float POSITION_MODIFIER = 0.01f;

    protected Vector3 _scaleModifierVector;
    protected Vector3 _positionModifierVector;

    protected virtual void Start()
    {
       

        UI.SetActive(true);

        

    }

    protected virtual void OnPlusButtonClicked()
    {
        for (int i = 0; i < _gameObjectsToModifyAlong.Length; i++)
        {
            _gameObjectsToModifyAlong[i].transform.localScale += _scaleModifierVector;
        }

        
    }

    protected virtual void OnMinusButtonClicked()
    {
        for (int i = 0; i < _gameObjectsToModifyAlong.Length; i++)
        {
            _gameObjectsToModifyAlong[i].transform.localScale -= _scaleModifierVector;
        }

       
    }
}
