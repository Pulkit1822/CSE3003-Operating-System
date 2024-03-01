## Summary
This code is an implementation of the Shortest Job First (SJF) scheduling algorithm. It takes the burst time of each process as input, sorts the processes based on their burst time in ascending order, calculates the waiting time and turnaround time for each process, and then displays the process details along with the average waiting time and average turnaround time.

## Example Usage
```cpp
Enter the number of processes: 3
Enter the burst time for process 1: 5
Enter the burst time for process 2: 3
Enter the burst time for process 3: 7

Process id   Burst Time   Waiting Time   Turnaround Time
    2             3             0             3
    1             5             3             8
    3             7             8             15

Average Waiting Time: 3.66667
Average Turnaround Time: 8.66667
```

## Code Analysis
### Inputs
- `n`: the number of processes
- `processes[i].burst_time`: the burst time of process `i+1`
___
### Flow
1. Read the number of processes from the user.
2. Read the burst time for each process from the user.
3. Sort the processes based on their burst time in ascending order.
4. Calculate the waiting time and turnaround time for each process.
5. Display the process details along with the average waiting time and average turnaround time.
___
### Outputs
- Process details: process id, burst time, waiting time, and turnaround time for each process.
- Average waiting time and average turnaround time.
___
