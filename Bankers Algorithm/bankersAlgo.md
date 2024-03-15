## Summary
This code snippet implements the Banker's Algorithm, which is used to determine if a system is in a safe state or not. It takes input for the number of processes, number of resources, allocation matrix, max matrix, and available resources. It then calculates the need matrix and checks if the system is in a safe state by finding a safe sequence of processes.

## Example Usage
```cpp
Enter the number of processes: 5
Enter the number of resources: 3
Enter the allocation matrix:
0 1 0
2 0 0
3 0 2
2 1 1
0 0 2
Enter the max matrix:
7 5 3
3 2 2
9 0 2
2 2 2
4 3 3
Enter the available resources:
3 3 2
Following is the SAFE Sequence
 P1 -> P3 -> P4 -> P0 -> P2
```

## Code Analysis
### Inputs
- `n`: the number of processes
- `m`: the number of resources
- `alloc`: the allocation matrix
- `max`: the max matrix
- `avail`: the available resources
___
### Flow
1. Take input for the number of processes and number of resources.
2. Take input for the allocation matrix.
3. Take input for the max matrix.
4. Take input for the available resources.
5. Calculate the need matrix by subtracting the allocation matrix from the max matrix.
6. Find a safe sequence of processes by checking if the need of each process can be satisfied with the available resources.
7. If a safe sequence is found, print it. Otherwise, print that the system is not safe.
___
### Outputs
- If the system is in a safe state, print the safe sequence of processes.
- If the system is not in a safe state, print that the system is not safe.
___
