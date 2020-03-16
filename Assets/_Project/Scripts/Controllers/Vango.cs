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

    const int MAX_TASKS = 6;

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
        sofa.GetComponent<ModifyBackHeight>().enabled = false;
        sofa.GetComponent<SeatSelector>().enabled = false;
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
            case TaskType.BackHeight: {
                    StartBackHeightTask();
                    break;
                }
            case TaskType.ChangeSeatsQuantity: {
                    StartChangeSeatQuantityTask();
                    break;
                }

            default:
                break;

        }
    }

    private void StartChangeSeatQuantityTask()
    {
        sofa.GetComponent<SeatSelector>().enabled = true;
    }

    private void StartBackHeightTask()
    {
        sofa.GetComponent<ModifyBackHeight>().enabled = true;
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
