using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FabricSelector : MonoBehaviour
{

    public GameObject fabricSelectorUIObject;

    private FabricSelectorUI fabricSelectorUI;



    public Material[] fabricMaterial;
    public Material pillowMaterial;

    protected virtual void OnEnable()
    {
        fabricSelectorUIObject.SetActive(true);
        fabricSelectorUI = fabricSelectorUIObject.GetComponent<FabricSelectorUI>();

        fabricSelectorUI.onFabricSelected += OnFabricSelected;
    }



    protected virtual void OnFabricSelected(Texture texture)
    {
        for (int i = 0; i < fabricMaterial.Length; i++)
        {
            fabricMaterial[i].SetTexture("_MainTex", texture);
        }
        pillowMaterial.SetTexture("_MainTex", texture);
    }



    protected virtual void OnDisable()
    {
        fabricSelectorUIObject.SetActive(false);
        fabricSelectorUI.onFabricSelected -= OnFabricSelected;
    }


}
