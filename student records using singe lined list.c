#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct StudentDetails {
    char name[50];
    char dept[20];
};

struct Student {
    int roll;
    struct StudentDetails details;
    struct Student *next;
};

int main() {
    struct Student *head = NULL, *second = NULL;

    head = (struct Student *)malloc(sizeof(struct Student));
    head->roll = 1;
    strcpy(head->details.name, "Arun");
    strcpy(head->details.dept, "CSE");

    second = (struct Student *)malloc(sizeof(struct Student));
    second->roll = 2;
    strcpy(second->details.name, "Meena");
    strcpy(second->details.dept, "IT");

    head->next = second;
    second->next = NULL;

    struct Student *temp = head;
    while (temp != NULL) {
        printf("%d %s %s -> ", temp->roll,
               temp->details.name,
               temp->details.dept);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
