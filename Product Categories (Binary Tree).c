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
    struct Node* root = createNode("Products");

    root->left = createNode("Electronics");
    root->right = createNode("Clothing");

    root->left->left = createNode("Mobiles");
    root->left->right = createNode("Laptops");

    printf("Main Category: %s\n", root->name);
    printf("Electronics Sub-Category: %s\n", root->left->left->name);
    printf("Electronics Sub-Category: %s\n", root->left->right->name);

    return 0;
}
