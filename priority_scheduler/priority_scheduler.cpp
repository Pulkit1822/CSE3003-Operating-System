/*****************************************************
*                                                   *
*       Priority Scheduling (Non-preemptive)         *
*                                                   *
*****************************************************/


#include <iostream>
using namespace std;

struct Process {
    int processID;
    int burstTime;
    int waitingTime;
    int turnaroundTime;
    int priority;
} processes[10], tempProcess;

int main() {
    int i, j, numProcesses, totalWaitingTime = 0, totalTurnaroundTime = 0, averageWaitingTime, averageTurnaroundTime;

    cout << "Enter the number of processes: ";
    cin >> numProcesses;

    for (i = 1; i <= numProcesses; i++) {
        processes[i].processID = i;
        cout << "Enter the burst time for process " << i << ": ";
        cin >> processes[i].burstTime;
        cout << "Enter the priority for process " << i << ": ";
        cin >> processes[i].priority;
    }

    for (i = 1; i < numProcesses; i++) {
        for (j = i + 1; j <= numProcesses; j++) {
            if (processes[i].priority > processes[j].priority) {
                tempProcess = processes[i];
                processes[i] = processes[j];
                processes[j] = tempProcess;
            }
        }
    }

    processes[1].waitingTime = 0;
    processes[1].turnaroundTime = processes[1].burstTime + processes[1].waitingTime;

    for (i = 2; i <= numProcesses; i++) {
        processes[i].waitingTime = processes[i - 1].burstTime + processes[i - 1].waitingTime;
        processes[i].turnaroundTime = processes[i].burstTime + processes[i].waitingTime;
    }

    cout << "\nProcess\tBT\tWT\tTT\n";
    for (i = 1; i <= numProcesses; i++) {
        cout << processes[i].processID << "\t" << processes[i].burstTime << "\t" << processes[i].waitingTime << "\t" << processes[i].turnaroundTime << endl;
        totalWaitingTime += processes[i].waitingTime;
        totalTurnaroundTime += processes[i].turnaroundTime;
    }

    averageWaitingTime = totalWaitingTime / numProcesses;
    averageTurnaroundTime = totalTurnaroundTime / numProcesses;

    cout << "\nAverage Waiting Time = " << averageWaitingTime << "\nAverage Turnaround Time = " << averageTurnaroundTime << endl;

    return 0;
}
