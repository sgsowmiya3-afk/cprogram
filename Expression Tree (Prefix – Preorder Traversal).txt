#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(char val) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%c ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main() {
    struct Node* root = createNode('*');
    root->left = createNode('+');
    root->right = createNode('C');

    root->left->left = createNode('A');
    root->left->right = createNode('B');

    printf("Prefix Expression: ");
    preorder(root);

    return 0;
}
