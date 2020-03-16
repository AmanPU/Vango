using System;
using UnityEngine;

public class BackSelectorUI : MonoBehaviour
{

    public Action<SeatAndBackType> onBackSelected;

    public void OnBackSelectorClicked(int seatType)
    {
        onBackSelected((SeatAndBackType)seatType);
    }

}
