using UnityEngine.UI;
using UnityEngine;


public class InfoText : MonoBehaviour {


	string[] infoTexts = new string[] {
		"Set Length of Sofa",
		"Set Depth of Sofa",
		"Set Width of arm of Sofa",
		"Set Depth of arm of Sofa",
        "Set Height of Back of Sofa",
        "Change Seat Quantity",
        "Change Back Quantity",
        "Reselect Fabric"

	};

	public Vango vango;



	void Start () {
		vango.onTaskChanged = OnTaskChanged;
	}


	void OnTaskChanged(TaskType task)
	{
		GetComponent<Text>().text = infoTexts[(int)task];
    }

}
