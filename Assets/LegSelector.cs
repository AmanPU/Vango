using System;
using UnityEngine;

public class LegSelector : MonoBehaviour
{

    public GameObject legSelectorUI;

    private void OnEnable()
    {
        legSelectorUI.SetActive(true);
    }

    private void OnDisable()
    {
        legSelectorUI.SetActive(false);
    }

    //public Action<SeatAndBackType> onBackSelected;

    //public void OnBackSelectorClicked(int seatType)
    //{
    //    onBackSelected((SeatAndBackType)seatType);
    //}

}
