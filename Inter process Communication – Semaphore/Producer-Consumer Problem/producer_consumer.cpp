#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

#define BUFFER_SIZE 10
#define ITEMS_TO_PRODUCE 20

int buffer[BUFFER_SIZE];
int in = 0, out = 0;
int semaphore_id;

void wait_semaphore(int semid) {
    struct sembuf sb;
    sb.sem_num = 0;
    sb.sem_op = -1;
    sb.sem_flg = SEM_UNDO;

    if (semop(semid, &sb, 1) < 0) {
        perror("semop");
    }
}

void signal_semaphore(int semid) {
    struct sembuf sb;
    sb.sem_num = 0;
    sb.sem_op = 1;
    sb.sem_flg = SEM_UNDO;

    if (semop(semid, &sb, 1) < 0) {
        perror("semop");
    }
}

void producer() {
    int item;
    for (int i = 0; i < ITEMS_TO_PRODUCE; i++) {
        wait_semaphore(semaphore_id);
        item = rand() % 100;
        buffer[in] = item;
        std::cout << "Producer produced item: " << item << std::endl;
        in = (in + 1) % BUFFER_SIZE;
        signal_semaphore(semaphore_id);
        sleep(1);
    }
}

void consumer() {
    int item;
    for (int i = 0; i < ITEMS_TO_PRODUCE; i++) {
        wait_semaphore(semaphore_id);
        item = buffer[out];
        std::cout << "Consumer consumed item: " << item << std::endl;
        out = (out + 1) % BUFFER_SIZE;
        signal_semaphore(semaphore_id);
        sleep(1);
    }
}

int main() {
    key_t key;
    int shared_memory_id;

    key = ftok(".", 'a');
    semaphore_id = semget(key, 1, IPC_CREAT | 0666);
    if (semaphore_id < 0) {
        perror("semget");
        exit(1);
    }

    union semun {
        int val;
        struct semid_ds *buf;
        unsigned short *array;
    } arg;
    arg.val = 1;
    if (semctl(semaphore_id, 0, SETVAL, arg) < 0) {
        perror("semctl");
        exit(1);
    }

    pid_t pid = fork();
    if (pid == 0) {
        producer();
    } else {
        consumer();
    }

    return 0;
}