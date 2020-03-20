using System;
using UnityEngine;

public class PillowSelector : MonoBehaviour
{

    public GameObject pillowSelectorUI;

    private void OnEnable()
    {
        pillowSelectorUI.SetActive(true);
    }

    private void OnDisable()
    {
        pillowSelectorUI.SetActive(false);
    }

    //public Action<SeatAndBackType> onBackSelected;

    //public void OnBackSelectorClicked(int seatType)
    //{
    //    onBackSelected((SeatAndBackType)seatType);
    //}

}
