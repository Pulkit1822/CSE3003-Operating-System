/*****************************************************
*                                                   *
*       Round Robin scheduling (Non-preemptive)     *
*                                                   *
*****************************************************/

#include <iostream>
using namespace std;

int main() {
    int num_processes, burst_time[10], waiting_time[10], turnaround_time[10], time_slice, max_burst_time;
    float avg_waiting_time = 0, avg_turnaround_time = 0, current_time = 0;

    cout << "Enter the number of processes: ";
    cin >> num_processes;

    for (int i = 0; i < num_processes; i++) {
        cout << "\nEnter Burst Time for process " << i + 1 << ": ";
        cin >> burst_time[i];
        turnaround_time[i] = burst_time[i];
    }

    cout << "\nEnter the size of time slice: ";
    cin >> time_slice;

    max_burst_time = burst_time[0];
    for (int i = 1; i < num_processes; i++)
        if (max_burst_time < burst_time[i])
            max_burst_time = burst_time[i];

    for (int j = 0; j < (max_burst_time / time_slice) + 1; j++)
        for (int i = 0; i < num_processes; i++)
            if (burst_time[i] != 0)
                if (burst_time[i] <= time_slice) {
                    turnaround_time[i] = current_time + burst_time[i];
                    current_time = current_time + burst_time[i];
                    burst_time[i] = 0;
                } else {
                    burst_time[i] = burst_time[i] - time_slice;
                    current_time = current_time + time_slice;
                }

    for (int i = 0; i < num_processes; i++) {
        waiting_time[i] = turnaround_time[i] - burst_time[i];
        avg_turnaround_time += turnaround_time[i];
        avg_waiting_time += waiting_time[i];
    }

    cout << "\nThe Average Turnaround time is: " << avg_turnaround_time / num_processes;
    cout << "\nThe Average Waiting time is: " << avg_waiting_time / num_processes;
    cout << "\n\tPROCESS\t BURST TIME \t WAITING TIME\tTURNAROUND TIME\n";
    for (int i = 0; i < num_processes; i++)
        cout << "\t" << i + 1 << "\t" << burst_time[i] << "\t\t" << waiting_time[i] << "\t\t" << turnaround_time[i] << "\n";

    return 0;
}
