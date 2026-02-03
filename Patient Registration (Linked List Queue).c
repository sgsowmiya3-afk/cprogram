#include <stdio.h>
#include <stdlib.h>

struct Node {
    int id;
    struct Node* next;
};

struct Node *front = NULL, *rear = NULL;
int count = 0;

void enqueue(int id) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->id = id;
    newNode->next = NULL;

    if (rear == NULL)
        front = rear = newNode;
    else {
        rear->next = newNode;
        rear = newNode;
    }
    count++;
}

void dequeue() {
    if (front == NULL) {
        printf("No patients waiting\n");
        return;
    }
    struct Node* temp = front;
    printf("Patient attended: %d\n", temp->id);
    front = front->next;
    free(temp);
    count--;
}

void showFront() {
    if (front == NULL)
        printf("Queue Empty\n");
    else
        printf("Current patient: %d\n", front->id);
}

void size() {
    printf("Patients waiting: %d\n", count);
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);

    dequeue();
    showFront();

    return 0;
}
