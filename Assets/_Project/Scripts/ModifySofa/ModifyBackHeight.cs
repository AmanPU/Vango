using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModifyBackHeight : ModifySofa {

	// Use this for initialization
	protected override void Start () {
		base.Start();
		_scaleModifierVector = Vector3.forward * SCALE_MODIFIER;
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
