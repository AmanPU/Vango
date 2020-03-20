using System;
using UnityEngine;

public class LegStainSelector : MonoBehaviour
{

    public GameObject legStainSelectorUI;

    private void OnEnable()
    {
        legStainSelectorUI.SetActive(true);
    }

    private void OnDisable()
    {
        legStainSelectorUI.SetActive(false);
    }

    //public Action<SeatAndBackType> onBackSelected;

    //public void OnBackSelectorClicked(int seatType)
    //{
    //    onBackSelected((SeatAndBackType)seatType);
    //}

}
