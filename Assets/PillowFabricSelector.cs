using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PillowFabricSelector : FabricSelector {

    
    protected override void OnFabricSelected(Texture texture)
    {
       
        pillowMaterial.SetTexture("_MainTex", texture);
    }
   
}
