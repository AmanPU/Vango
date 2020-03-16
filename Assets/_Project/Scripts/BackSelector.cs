using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackSelector : MonoBehaviour
{

    public GameObject backSelectorUIObject;

    private BackSelectorUI backSelectorUI;

    public GameObject[] backs;

    private void OnEnable()
    {
        backSelectorUIObject.SetActive(true);
    }

    // Use this for initialization
    void Start()
    {
        backSelectorUI = backSelectorUIObject.GetComponent<BackSelectorUI>();

        backSelectorUI.onBackSelected = OnSeatSelected;
    }

    private void OnSeatSelected(SeatAndBackType seatAndBackType)
    {
        DisableAllSeats();
        backs[(int)seatAndBackType].SetActive(true);
    }

    private void DisableAllSeats()
    {
        for (int i = 0; i < backs.Length; i++)
        {
            backs[i].SetActive(false);
        }
    }

    public void OnDisable()
    {
        backSelectorUIObject.SetActive(false);
    }


}
