#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char name[20];
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(char name[]) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    strcpy(node->name, name);
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main() {
    struct Node* CEO = createNode("CEO");

    CEO->left = createNode("Manager1");
    CEO->right = createNode("Manager2");

    CEO->left->left = createNode("TeamLead1");
    CEO->left->right = createNode("TeamLead2");

    printf("CEO: %s\n", CEO->name);
    printf("Left Manager: %s\n", CEO->left->name);
    printf("Right Team Lead under Manager1: %s\n",
           CEO->left->right->name);

    return 0;
}
