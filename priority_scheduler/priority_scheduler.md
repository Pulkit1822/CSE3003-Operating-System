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

## How to run this project?
To run the priority scheduler project, follow these steps:
1. Clone the repository to your local machine using `git clone https://github.com/Pulkit1822/CSE3003-Operating-System.git`.
2. Navigate to the `priority_scheduler` directory.
3. Compile the code using a C++ compiler. For example, you can use `g++ priority_scheduler.cpp -o priority_scheduler`.
4. Run the compiled program using `./priority_scheduler`.
5. Follow the on-screen instructions to input the number of processes, burst times, and priorities.

## Contribution guidelines
Contributions to this project are welcome. If you would like to contribute:
1. Fork the repository and create your branch from `main`.
2. Ensure any new code is well-documented and follows the established coding style.
3. Create a pull request with a clear description of your changes and their rationale.
