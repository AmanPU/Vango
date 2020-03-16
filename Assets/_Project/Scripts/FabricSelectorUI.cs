using System;
using UnityEngine;

public class FabricSelectorUI : MonoBehaviour
{


    

    public Action<Texture> onFabricSelected;

    public void OnFabricSelectorClicked(Texture seatTexture)
    {
        onFabricSelected(seatTexture);
    }

}
