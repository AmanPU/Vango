using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public partial class Vango : MonoBehaviour
{


    public Action<TaskType> onTaskChanged;

    public Action invalidTaskInvoked;

    int currentTask;

    public GameObject sofa;

    const int MAX_TASKS = 4;

    // Use this for initialization
    void Start()
    {

        currentTask = 0;

        SetTask(currentTask);
    }




    public void OnNextButtonClicked()
    {
        if (currentTask == MAX_TASKS - 1) {
            invalidTaskInvoked();
        } else {
            currentTask++;
            InitializeNewTask();
        }
    }

    private void InitializeNewTask()
    {
        DisableEverything();
        SetTask(currentTask);
        onTaskChanged((TaskType)currentTask);
    }

    public void OnPreviousButtonClicked()
    {
        if (currentTask == 0)
        {
            invalidTaskInvoked();
        }
        else
        {
            currentTask--;
            InitializeNewTask();
        }
    }

    void DisableEverything()
    {
        sofa.GetComponent<ModifyArmWidth>().enabled = false;
        sofa.GetComponent<ModifyArmDepth>().enabled = false;
        sofa.GetComponent<ModifyLength>().enabled = false;
        sofa.GetComponent<ModifyDepth>().enabled = false;
    }

    private void SetTask(int currentTask)
    {
        switch ((TaskType)currentTask)
        {
            case TaskType.Length:
                {
                    StartLengthTask();
                    break;
                }
            case TaskType.Depth:
                {
                    StartDepthTask();
                    break;
                }
            case TaskType.ArmWidth:
                {
                    StartArmWidthTask();
                    break;
                }

            case TaskType.ArmDepth:
                {
                    StartArmDepthTask();
                    break;
                }

            default:
                break;

        }
    }

    private void StartArmDepthTask()
    {
        sofa.GetComponent<ModifyArmDepth>().enabled = true;
    }

    private void StartArmWidthTask()
    {

        sofa.GetComponent<ModifyArmWidth>().enabled = true;
    }

    private void StartDepthTask()
    {
        sofa.GetComponent<ModifyDepth>().enabled = true;
    }

    private void StartLengthTask()
    {
        sofa.GetComponent<ModifyLength>().enabled = true;
    }
}
