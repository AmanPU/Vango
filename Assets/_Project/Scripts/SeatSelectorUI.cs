using System;
using UnityEngine;

public class SeatSelectorUI : MonoBehaviour {

    public Action<SeatAndBackType> onSeatSelected; 

    public void OnSeatSelectorClicked(int seatType) {
        onSeatSelected((SeatAndBackType)seatType);
    }

}
