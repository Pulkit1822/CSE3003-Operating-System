#include <iostream>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <unistd.h>
#include <cstdlib>

#define BUFFER_SIZE 5
#define ITEMS_TO_PRODUCE 10

union my_semun {
    int val;
    struct semid_ds *buf;
    unsigned short *array;
};

int createSemaphore(int key, int nsems) {
    int semaphoreID;
    my_semun arg;
    arg.val = 1;

    semaphoreID = semget(key, nsems, IPC_CREAT | 0666);
    if (semaphoreID < 0) {
        perror("semget");
        return -1;
    }

    if (semctl(semaphoreID, 0, SETVAL, arg) < 0) {
        perror("semctl");
        return -1;
    }

    return semaphoreID;
}

void waitSemaphore(int semaphoreID) {
    struct sembuf semaphoreOperation;
    semaphoreOperation.sem_num = 0;
    semaphoreOperation.sem_op = -1;
    semaphoreOperation.sem_flg = SEM_UNDO;

    if (semop(semaphoreID, &semaphoreOperation, 1) < 0) {
        perror("semop");
    }
}

void signalSemaphore(int semaphoreID) {
    struct sembuf semaphoreOperation;
    semaphoreOperation.sem_num = 0;
    semaphoreOperation.sem_op = 1;
    semaphoreOperation.sem_flg = SEM_UNDO;

    if (semop(semaphoreID, &semaphoreOperation, 1) < 0) {
        perror("semop");
    }
}

int buffer[BUFFER_SIZE];
int inIndex = 0, outIndex = 0;
int semaphoreID;

void produceItem() {
    int item = rand() % 100;
    waitSemaphore(semaphoreID);
    buffer[inIndex] = item;
    std::cout << "Producer produced item: " << item << std::endl;
    inIndex = (inIndex + 1) % BUFFER_SIZE;
    signalSemaphore(semaphoreID);
    sleep(1);
}

void consumeItem() {
    int item;
    waitSemaphore(semaphoreID);
    item = buffer[outIndex];
    std::cout << "Consumer consumed item: " << item << std::endl;
    outIndex = (outIndex + 1) % BUFFER_SIZE;
    signalSemaphore(semaphoreID);
    sleep(1);
}

int main() {
    key_t key = ftok(".", 'a');
    semaphoreID = createSemaphore(key, 1);
    if (semaphoreID < 0) {
        std::cerr << "Semaphore initialization failed." << std::endl;
        exit(1);
    }

    pid_t pid = fork();
    if (pid == 0) {
        for (int i = 0; i < ITEMS_TO_PRODUCE; i++) {
            produceItem();
        }
    } else {
        for (int i = 0; i < ITEMS_TO_PRODUCE; i++) {
            consumeItem();
        }
    }

    return 0;
}

