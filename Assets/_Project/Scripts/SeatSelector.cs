using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SeatSelector : MonoBehaviour {

	public GameObject seatSelectorUIObject;

    private SeatSelectorUI seatSelectorUI;

    public GameObject[] seats;

    private void OnEnable()
    {
        seatSelectorUIObject.SetActive(true);
    }

    // Use this for initialization
    void Start () {
		seatSelectorUI = seatSelectorUIObject.GetComponent<SeatSelectorUI>();

		seatSelectorUI.onSeatSelected = OnSeatSelected;
	}

    private void OnSeatSelected(SeatAndBackType seatAndBackType)
    {
        DisableAllSeats();
        seats[(int)seatAndBackType].SetActive(true);
    }

    private void DisableAllSeats() {
        for (int i = 0; i < seats.Length; i++)
        {
            seats[i].SetActive(false);
        }
    }

    public void OnDisable()
    {
        seatSelectorUIObject.SetActive(false);
    }


}
