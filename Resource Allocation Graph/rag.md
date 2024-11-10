## Summary
The code snippet is a function called `getCountOfResourceCollisions` that takes in the number of processes, a vector of process numbers, the number of rows and columns in a resource matrix, the resource matrix itself, and a resource to check for collisions. The function counts the number of collisions between the resource to check and the resources in the matrix, and returns the count.

## Example Usage
```cpp
I have implemented a matrix for resource allocation
Enter the number of processes: 3
Enter Process Numbers (0-2 with spaces): 0 1 2
Enter number of rows for resource array: 2
Enter number of columns for resource array: 3
Enter resources (with spaces):
1 2 3
4 5 6
Enter a resource to check if collision happens
2
Counts of deadlock = 1
```

## Code Analysis
### Inputs
- `numberOfProcesses`: an integer representing the number of processes
- `processes`: a vector of integers representing the process numbers
- `numberOfRows`: an integer representing the number of rows in the resource matrix
- `numberOfColumns`: an integer representing the number of columns in the resource matrix
- `resources`: a 2D vector of integers representing the resource matrix
- `resourceToCheck`: an integer representing the resource to check for collisions
___
### Flow
1. The user is prompted to enter the number of processes.
2. The user is prompted to enter the process numbers.
3. The user is prompted to enter the number of rows and columns for the resource matrix.
4. The user is prompted to enter the resources in the matrix.
5. The user is prompted to enter a resource to check for collisions.
6. The `getCountOfResourceCollisions` function is called with the inputs.
7. The function iterates through the resource matrix and counts the number of collisions with the resource to check.
8. The count of collisions is returned.
9. The count of collisions is printed.
___
### Outputs
- `countOfCollisions`: an integer representing the number of collisions between the resource to check and the resources in the matrix.
___

## How to run this project?
To run the resource allocation graph example project, follow these steps:
1. Clone the repository to your local machine using `git clone https://github.com/Pulkit1822/CSE3003-Operating-System.git`.
2. Navigate to the `Resource Allocation Graph` directory.
3. Compile the code using a C++ compiler. For example, you can use `g++ rag.cpp -o rag`.
4. Run the compiled program using `./rag`.
5. Follow the on-screen instructions to input the number of processes, process numbers, resource matrix dimensions, resources, and the resource to check for collisions.

## Contribution guidelines
Contributions to this project are welcome. If you would like to contribute:
1. Fork the repository and create your branch from `main`.
2. Ensure any new code is well-documented and follows the established coding style.
3. Create a pull request with a clear description of your changes and their rationale.
