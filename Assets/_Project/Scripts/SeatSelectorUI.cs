using System;
using UnityEngine;

public class SeatSelectorUI : MonoBehaviour {

    public Action<SeatType> onSeatSelected; 

    public void OnSeatSelectorClicked(int seatType) {
        onSeatSelected((SeatType)seatType);
    }

}
