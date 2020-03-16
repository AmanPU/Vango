using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FabricSelector : MonoBehaviour
{

    public GameObject fabricSelectorUIObject;

    private FabricSelectorUI backSelectorUI;



    public Material fabricMaterial;

    private void OnEnable()
    {
        fabricSelectorUIObject.SetActive(true);
    }

    // Use this for initialization
    void Start()
    {
        backSelectorUI = fabricSelectorUIObject.GetComponent<FabricSelectorUI>();

        backSelectorUI.onFabricSelected = OnFabricSelected;
    }

    private void OnFabricSelected(Texture texture) 
    {
        fabricMaterial.SetTexture("_MainTex",texture);

    }

    

    public void OnDisable()
    {
        fabricSelectorUIObject.SetActive(false);
    }


}
