#include <stdio.h>
#define MAX 10

int queue[MAX];
int front = 0, rear = -1;

void enqueue(int id) {
    if (rear == MAX - 1) {
        printf("Queue is Full\n");
        return;
    }
    queue[++rear] = id;
}

void dequeue() {
    if (front > rear) {
        printf("Queue is Empty\n");
        return;
    }
    printf("Customer served: %d\n", queue[front++]);
}

void showFront() {
    if (front > rear)
        printf("Queue is Empty\n");
    else
        printf("Current customer: %d\n", queue[front]);
}

void size() {
    printf("Customers waiting: %d\n", rear - front + 1);
}

int isEmpty() {
    return front > rear;
}

int main() {
    enqueue(101);
    enqueue(102);
    enqueue(103);

    dequeue();
    showFront();
    size();

    return 0;
}
