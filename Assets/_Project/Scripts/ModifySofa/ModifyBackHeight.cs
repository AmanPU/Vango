using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModifyBackHeight : ModifySofa {

	// Use this for initialization
	protected override void Start () {
		base.Start();
		_scaleModifierVector = Vector3.forward * SCALE_MODIFIER;
        minLimit = -8;
        maxLimit = 10;
	}

    protected override void OnPlusButtonClicked()
    {
        modifications++;
        if (IsModificationAllowed())
        {
            base.OnPlusButtonClicked();
        }
        else {
            modifications--;
            vango.invalidTaskInvoked();    
        }
    }

    protected override void OnMinusButtonClicked()
    {
        modifications--;
        if (IsModificationAllowed())
        {
            base.OnMinusButtonClicked();
        }
        else {
            modifications++;
            vango.invalidTaskInvoked();   
        }
    }

    protected override void OnEnable()
    {
        base.OnEnable();
        GetComponent<RotateForLength>().enabled = true;
    }

    protected override void OnDisable()
    {
        base.OnDisable();
        
        GetComponent<RotateForLength>().enabled = false;
    }
    
}
