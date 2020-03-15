using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scroll : MonoBehaviour
{

    int totalPieces;
    int currentPiece;
    const int POSITION_OFFSET = -6;

    // Use this for initialization
    void Start()
    {
        totalPieces = transform.childCount;
        currentPiece = 0;
        Debug.Log(totalPieces);
    }

    // Update is called once per frame
    void Update()
    {

    }


    public void OnPreviousButtonClicked()
    {
        if(currentPiece > 0)
        Move(currentPiece - 1);
    }

    public void OnNextButtonClicked()
    {
        if(currentPiece < totalPieces - 1)
        Move(currentPiece + 1);
    }

    private void Move(int destination)
    {
        currentPiece = Mathf.Abs(destination % totalPieces);
        Debug.Log(currentPiece);

        LeanTween.moveLocalX(gameObject, currentPiece * POSITION_OFFSET, 0.3f);
    }
}
