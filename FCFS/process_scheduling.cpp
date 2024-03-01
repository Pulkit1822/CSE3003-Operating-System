/*****************************************************
*                                                   *
*           FCFS (Non-preemptive)                   *
*                                                   *
*****************************************************/

#include <iostream>
using namespace std;

struct Process {
    int process_id;
    int burst_time;
    int waiting_time;
    int turnaround_time;
};

int main() {
    Process processes[10], temp;
    int num_processes, total_waiting_time = 0, total_turnaround_time = 0;

    cout << "Enter the number of processes: ";
    cin >> num_processes;

    for (int i = 0; i < num_processes; i++) {
        processes[i].process_id = i + 1;
        cout << "Enter the burst time for process " << processes[i].process_id << ": ";
        cin >> processes[i].burst_time;
    }

    for (int i = 0; i < num_processes - 1; i++) {
        for (int j = i + 1; j < num_processes; j++) {
            if (processes[i].burst_time > processes[j].burst_time) {
                temp = processes[i];
                processes[i] = processes[j];
                processes[j] = temp;
            }
        }
    }

    processes[0].waiting_time = 0;
    processes[0].turnaround_time = processes[0].burst_time + processes[0].waiting_time;

    for (int i = 1; i < num_processes; i++) {
        processes[i].waiting_time = processes[i - 1].burst_time + processes[i - 1].waiting_time;
        processes[i].turnaround_time = processes[i].burst_time + processes[i].waiting_time;
    }

    cout << "\nProcess id \tBurst Time \tWaiting Time \tTurnaround Time\n";
    for (int i = 0; i < num_processes; i++) {
        cout << "\t" << processes[i].process_id << "\t\t" << processes[i].burst_time << "\t\t" << processes[i].waiting_time << "\t\t" << processes[i].turnaround_time << "\n";
        total_waiting_time += processes[i].waiting_time;
        total_turnaround_time += processes[i].turnaround_time;
    }

    float avg_waiting_time = (float)total_waiting_time / num_processes;
    float avg_turnaround_time = (float)total_turnaround_time / num_processes;

    cout << "\nAverage Waiting Time: " << avg_waiting_time << endl;
    cout << "Average Turnaround Time: " << avg_turnaround_time << endl;

    return 0;
}
