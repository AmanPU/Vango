using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModifySofa : MonoBehaviour
{

    public GameObject UI;

    public GameObject[] _gameObjectsToModifyAlong;

    public GameObject _leftArm;
    public GameObject _rightArm;

    public GameObject[] _backs;
    public GameObject[] _seats;

    
    public GameObject[] sizeDisplayer;


    protected const float SCALE_MODIFIER = 0.0001f;
    protected const float POSITION_MODIFIER = 0.01f;

    protected Vector3 _scaleModifierVector;
    protected Vector3 _positionModifierVector;


    public Action<Vector3> onUpScale;
    public Action<Vector3> onDownScale;


    protected virtual void OnEnable()
    {
        for (int i = 0; i < sizeDisplayer.Length; i++)
        {
            sizeDisplayer[i].SetActive(true);
        }

        UI.GetComponent<ModifySofaUI>().onMinusButtonClicked += OnMinusButtonClicked;
        UI.GetComponent<ModifySofaUI>().onPlusButtonClicked += OnPlusButtonClicked;
        UI.SetActive(true);
    }

    protected virtual void Start()
    {
       

        

        

    }

    protected virtual void OnPlusButtonClicked()
    {
        for (int i = 0; i < _gameObjectsToModifyAlong.Length; i++)
        {
            _gameObjectsToModifyAlong[i].transform.localScale += _scaleModifierVector;
        }

        onUpScale(_scaleModifierVector);



        
    }

    protected virtual void OnMinusButtonClicked()
    {
        for (int i = 0; i < _gameObjectsToModifyAlong.Length; i++)
        {
            _gameObjectsToModifyAlong[i].transform.localScale -= _scaleModifierVector;
        }

        onDownScale(_scaleModifierVector);

       
    }

    protected virtual void OnDisable()
    {
        for (int i = 0; i < sizeDisplayer.Length; i++)
        {
            sizeDisplayer[i].SetActive(false);
        }

        UI.GetComponent<ModifySofaUI>().onMinusButtonClicked -= OnMinusButtonClicked;
        UI.GetComponent<ModifySofaUI>().onPlusButtonClicked -= OnPlusButtonClicked;
        UI.SetActive(false);
    }
}
