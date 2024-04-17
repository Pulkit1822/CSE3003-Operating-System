# Operating System Algorithms Repository

Welcome to the OS Algorithms Repository! This repository contains implementations of various OS algorithms in C++. Whether you're a student studying OS or a developer looking to understand these algorithms better, this repository aims to provide clear and concise implementations along with explanations to aid your learning.

## Algorithms Implemented

1. **[Round Robin Scheduler](https://github.com/Pulkit1822/CSE3003-Operating_System/tree/main/round_robin_scheduler)**: This algorithm is a preemptive scheduler where each process is assigned a fixed time slice or quantum. Once a process consumes its quantum, it's moved to the back of the ready queue to await its turn again. This implementation demonstrates how round-robin scheduling can be achieved efficiently in C++.

2. **[Priority Scheduler](https://github.com/Pulkit1822/CSE3003-Operating_System/tree/main/priority_scheduler)**: Priority scheduling assigns priorities to each process, and the CPU is allocated to the process with the highest priority. In case of ties, a round-robin approach can be used. This implementation showcases how to implement priority scheduling and handle priorities effectively.

3. **[Shortest Job First (SJF)](https://github.com/Pulkit1822/CSE3003-Operating_System/tree/main/Shortest%20Job%20First)**: SJF scheduling algorithm selects the process with the smallest execution time next. This implementation demonstrates how to implement SJF scheduling in C++.

4. **[First-Come, First-Served (FCFS)](https://github.com/Pulkit1822/CSE3003-Operating_System/tree/main/FCFS)**: FCFS scheduling algorithm executes processes in the order they arrive in the ready queue. This implementation demonstrates how to implement FCFS scheduling in C++.

5. **_[Inter Process Communication - Semaphore]()_**:
 - **[Semaphore](https://github.com/Pulkit1822/CSE3003-Operating_System/tree/main/Inter%20process%20Communication%20%E2%80%93%20Semaphore/Semaphore)**: It demonstrates the implementation of semaphores for synchronization in a producer-consumer scenario. It creates a semaphore, allows the producer to produce items, and the consumer to consume them from a shared buffer. Semaphores are used to control access to the buffer and ensure proper synchronization between the producer and consumer processes.

- **[Producer-Consumer Problem](https://github.com/Pulkit1822/CSE3003-Operating_System/tree/main/Inter%20process%20Communication%20%E2%80%93%20Semaphore/Producer-Consumer%20Problem)**: It illustrates the classic producer-consumer problem using semaphores for synchronization. It sets up a shared buffer where the producer produces items and the consumer consumes them. Semaphores are employed to coordinate access to the buffer, preventing race conditions and ensuring orderly item production and consumption between the two processes.

6. **[Banker's Algorithm](https://github.com/Pulkit1822/CSE3003-Operating_System/tree/main/Bankers%20Algorithm)**: The Banker's Algorithm in OS is a resource allocation and deadlock avoidance algorithm. It helps prevent deadlock conditions by ensuring that resource allocation does not lead to a deadlock. The algorithm is based on the concept of a bank, where the bank never allocates more resources than what is available. It checks whether granting resources would lead to a deadlock and only grants resources if it would not result in a deadlock. It is mainly used to prevent deadlock.

7. **[Resource Allocation Graph](https://github.com/Pulkit1822/CSE3003-Operating_System/tree/main/Resource%20Allocation%20Graph)**: The Resource Allocation Graph (RAG) is a graphical representation that provides information about the state of the system in terms of processes and resources. It shows which resources are held by which processes and can help identify deadlocks. The vertices in a RAG represent processes and resources, with processes typically represented by circles and resources by rectangles. The edges in a RAG represent assignments (resources assigned to processes) and requests (processes waiting for resources). If there is a cycle in the RAG, it indicates a deadlock.

## How to Use

Each algorithm implementation is contained within its own directory along with a README file explaining the algorithm's logic and how to use the implementation. To use any algorithm:

1. Navigate to the respective algorithm's directory.
2. Follow the instructions provided in the README to compile and run the code.
3. Experiment with different inputs and configurations to observe the behavior of the algorithm.

## Contribution Guidelines

Contributions to this repository are welcome and encouraged. If you would like to contribute:

1. Fork the repository and create your branch from `main`.
2. Ensure any new code is well-documented and follows the established coding style.
3. Create a pull request with a clear description of your changes and their rationale.

## Feedback

If you have any feedback, suggestions, or questions regarding this repository, please feel free to open an issue or contact me below on any of the platforms you prefer 😊
<br/>
<p align="center">
  <a href="https://pulkitmathur.me/"><img src="https://media.licdn.com/dms/image/D4D03AQHWtA5nb5urXQ/profile-displayphoto-shrink_400_400/0/1698489701087?e=1712188800&v=beta&t=AuhifMq_1CChIXsMal3ac7OYnyMgRdBIFf6U4COIY2w" alt="portfolio" width="32"></a>&nbsp;&nbsp;&nbsp;
  <a href="https://www.linkedin.com/in/pulkitkmathur/"><img src="https://github.com/TheDudeThatCode/TheDudeThatCode/blob/master/Assets/Linkedin.svg" alt="Linkedin Logo" width="32"></a>&nbsp;&nbsp;&nbsp;
  <a href="mailto:pulkitmathur.me@gmail.com"><img src="https://github.com/TheDudeThatCode/TheDudeThatCode/blob/master/Assets/Gmail.svg" alt="Gmail logo" height="32"></a>&nbsp;&nbsp;&nbsp;
  <a href="https://www.instagram.com/pulkitkumarmathur/"><img src="https://github.com/TheDudeThatCode/TheDudeThatCode/blob/master/Assets/Instagram.svg" alt="Instagram Logo" width="32"></a>&nbsp;&nbsp;&nbsp;
  <a href="https://in.pinterest.com/pulkitkumarmathur/"><img src="https://upload.wikimedia.org/wikipedia/commons/0/08/Pinterest-logo.png?20160129083321" alt="Pinterest Logo" width="32"></a>&nbsp;&nbsp;&nbsp;
  <a href="https://twitter.com/pulkitkmathur"><img src="https://upload.wikimedia.org/wikipedia/commons/5/57/X_logo_2023_%28white%29.png" alt="Twitter Logo" width="32"></a>&nbsp;&nbsp;&nbsp;
</p>


Happy learning and coding!

---

If you find this repository useful, don't forget to star it! ⭐️
