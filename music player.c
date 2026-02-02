#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Station {
    char code[10];
    struct Station *prev;
    struct Station *next;
};

int main() {
    struct Station *head = NULL, *temp, *newStation;
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newStation = (struct Station*)malloc(sizeof(struct Station));
        scanf("%s", newStation->code);
        newStation->next = NULL;

        if (head == NULL) {
            newStation->prev = NULL;
            head = newStation;
        } 
        else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newStation;
            newStation->prev = temp;
        }
    }

    temp = head;
    while (temp != NULL) {
        printf("%s <-> ", temp->code);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
