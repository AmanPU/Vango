using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModifySofaUI : MonoBehaviour {

	public Action onPlusButtonClicked;
	public Action onMinusButtonClicked;

	public void OnPlusButtonClicked() {
		onPlusButtonClicked();
    }

	public void OnMinusButtonClicked() {
		onMinusButtonClicked();
	}
}
