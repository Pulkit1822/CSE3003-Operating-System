## Summary
The code snippet is a part of a larger program that implements a producer-consumer problem using semaphores. It defines functions for waiting and signaling a semaphore, as well as functions for the producer and consumer processes. The main function initializes a semaphore, creates a child process for the producer, and the parent process becomes the consumer.

## Example Usage
```cpp
// Initialize the semaphore and create producer and consumer processes
int main() {
    // ...
    key = ftok(".", 'a');
    semaphore_id = semget(key, 1, IPC_CREAT | 0666);
    // ...
    pid_t pid = fork();
    if (pid == 0) {
        producer();
    } else {
        consumer();
    }
    // ...
}
```

## Code Analysis
### Inputs
- `BUFFER_SIZE`: The size of the buffer used for storing items produced by the producer and consumed by the consumer.
- `ITEMS_TO_PRODUCE`: The number of items to be produced and consumed by the producer and consumer.
___
### Flow
1. The code defines the `wait_semaphore` and `signal_semaphore` functions for waiting and signaling a semaphore, respectively.
2. The `producer` function generates random items, adds them to the buffer, and signals the semaphore.
3. The `consumer` function consumes items from the buffer and signals the semaphore.
4. The `main` function initializes a semaphore using `semget` and sets its value to 1 using `semctl`.
5. The `main` function creates a child process using `fork`, where the child process becomes the producer and the parent process becomes the consumer.
___
### Outputs
- The producer process prints the items it produces.
- The consumer process prints the items it consumes.
___

## How to run this project?
To run the producer-consumer problem project, follow these steps:
1. Clone the repository to your local machine using `git clone https://github.com/Pulkit1822/CSE3003-Operating-System.git`.
2. Navigate to the `Inter process Communication – Semaphore/Producer-Consumer Problem` directory.
3. Compile the code using a C++ compiler. For example, you can use `g++ producer_consumer.cpp -o producer_consumer`.
4. Run the compiled program using `./producer_consumer`.
5. Follow the on-screen instructions to observe the producer and consumer processes in action.

## Contribution guidelines
Contributions to this project are welcome. If you would like to contribute:
1. Fork the repository and create your branch from `main`.
2. Ensure any new code is well-documented and follows the established coding style.
3. Create a pull request with a clear description of your changes and their rationale.
