## Summary
This code calculates the average waiting time and average turnaround time for a set of processes using the Round Robin scheduling algorithm.

## Example Usage
```cpp
Enter the number of processes: 3
Enter Burst Time for process 1: 5
Enter Burst Time for process 2: 3
Enter Burst Time for process 3: 7
Enter the size of time slice: 2

The Average Turnaround time is: 9
The Average Waiting time is: 4
    PROCESS     BURST TIME      WAITING TIME    TURNAROUND TIME
        1           0               0               5
        2           0               0               3
        3           0               0               7
```

## Code Analysis
### Inputs
- `num_processes`: the number of processes
- `burst_time`: an array containing the burst time for each process
- `time_slice`: the size of the time slice for the Round Robin algorithm
___
### Flow
1. Read the number of processes from the user.
2. Read the burst time for each process and initialize the turnaround time for each process to its burst time.
3. Read the size of the time slice from the user.
4. Find the maximum burst time among all the processes.
5. Iterate over the time slices until all processes have completed.
6. For each time slice, iterate over all the processes and execute them if their burst time is not zero.
7. If the burst time of a process is less than or equal to the time slice, update the turnaround time and current time, and set the burst time to zero.
8. If the burst time of a process is greater than the time slice, subtract the time slice from the burst time and update the current time.
9. Calculate the waiting time and average turnaround time for each process.
10. Print the average turnaround time, average waiting time, and the details of each process.
___
### Outputs
- The average turnaround time for the set of processes.
- The average waiting time for the set of processes.
- The details of each process, including its burst time, waiting time, and turnaround time.
___

## How to run this project?
To run the round-robin scheduler project, follow these steps:
1. Clone the repository to your local machine using `git clone https://github.com/Pulkit1822/CSE3003-Operating-System.git`.
2. Navigate to the `round_robin_scheduler` directory.
3. Compile the code using a C++ compiler. For example, you can use `g++ round_robin_scheduler.cpp -o round_robin_scheduler`.
4. Run the compiled program using `./round_robin_scheduler`.
5. Follow the on-screen instructions to input the number of processes, burst times, and time slice.

## Contribution guidelines
Contributions to this project are welcome. If you would like to contribute:
1. Fork the repository and create your branch from `main`.
2. Ensure any new code is well-documented and follows the established coding style.
3. Create a pull request with a clear description of your changes and their rationale.
