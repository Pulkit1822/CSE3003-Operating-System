## Summary
This code calculates the waiting time and turnaround time for a set of processes using the First-Come, First-Served (FCFS) scheduling algorithm.

## Example Usage
```cpp
Enter the number of processes: 3
Enter the burst time for process 1: 5
Enter the burst time for process 2: 3
Enter the burst time for process 3: 7

Process id   Burst Time   Waiting Time   Turnaround Time
        1            5              0                5
        2            3              5                8
        3            7              8               15

Average Waiting Time: 4.33333
Average Turnaround Time: 9.33333
```

## Code Analysis
### Inputs
- `num_processes`: the number of processes
- `processes[i].burst_time`: the burst time for each process
___
### Flow
1. Read the number of processes from the user.
2. Read the burst time for each process from the user.
3. Sort the processes in ascending order based on their burst time.
4. Calculate the waiting time and turnaround time for each process.
5. Print the process id, burst time, waiting time, and turnaround time for each process.
6. Calculate the average waiting time and average turnaround time.
7. Print the average waiting time and average turnaround time.
___
### Outputs
- Process id: the id of each process
- Burst Time: the burst time for each process
- Waiting Time: the waiting time for each process
- Turnaround Time: the turnaround time for each process
- Average Waiting Time: the average waiting time for all processes
- Average Turnaround Time: the average turnaround time for all processes
___
