## Summary
This code calculates the waiting time and turnaround time for a set of processes based on their burst time and priority. It then displays the process ID, burst time, waiting time, and turnaround time for each process, as well as the average waiting time and average turnaround time.

## Example Usage
```cpp
Enter the number of processes: 3
Enter the burst time for process 1: 5
Enter the priority for process 1: 2
Enter the burst time for process 2: 3
Enter the priority for process 2: 1
Enter the burst time for process 3: 4
Enter the priority for process 3: 3

Process BT  WT  TT
1       5   0   5
2       3   5   8
3       4   8   12

Average Waiting Time = 4
Average Turnaround Time = 8
```

## Code Analysis
### Inputs
- `numProcesses`: the number of processes
- `processes[i].burstTime`: the burst time for process `i`
- `processes[i].priority`: the priority for process `i`
___
### Flow
1. Read the number of processes from the user.
2. For each process, read the burst time and priority from the user.
3. Sort the processes based on their priority in ascending order.
4. Calculate the waiting time and turnaround time for each process.
5. Display the process ID, burst time, waiting time, and turnaround time for each process.
6. Calculate the average waiting time and average turnaround time.
7. Display the average waiting time and average turnaround time.
___
### Outputs
- Process ID, burst time, waiting time, and turnaround time for each process.
- Average waiting time and average turnaround time.
___
