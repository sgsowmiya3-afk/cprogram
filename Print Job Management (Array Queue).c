#include <stdio.h>
#include <string.h>
#define MAX 10

char queue[MAX][10];
int front = 0, rear = -1;

void enqueue(char job[]) {
    if (rear == MAX - 1) {
        printf("Printer Queue Full\n");
        return;
    }
    strcpy(queue[++rear], job);
}

void dequeue() {
    if (front > rear) {
        printf("No jobs to print\n");
        return;
    }
    printf("Job printed: %s\n", queue[front++]);
}

void showFront() {
    if (front > rear)
        printf("No pending jobs\n");
    else
        printf("Next job: %s\n", queue[front]);
}

void size() {
    printf("Pending jobs: %d\n", rear - front + 1);
}

int main() {
    enqueue("J1");
    enqueue("J2");
    enqueue("J3");

    dequeue();
    showFront();

    return 0;
}
