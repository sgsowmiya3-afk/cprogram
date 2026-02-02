#include <stdio.h>
#include <stdlib.h>

struct Supplier {
    char name[50];
    char location[50];
};

struct Product {
    int id;
    char name[50];
    float price;
    struct Supplier supplier;
};

int main() {
    struct Product *p;

    p = (struct Product *)malloc(sizeof(struct Product));

    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter Product ID: ");
    scanf("%d", &p->id);

    printf("Enter Product Name: ");
    scanf("%s", p->name);

    printf("Enter Product Price: ");
    scanf("%f", &p->price);

    printf("Enter Supplier Name: ");
    scanf("%s", p->supplier.name);

    printf("Enter Supplier Location: ");
    scanf("%s", p->supplier.location);

    printf("\n--- Product Details ---\n");
    printf("Product ID      : %d\n", p->id);
    printf("Product Name    : %s\n", p->name);
    printf("Product Price   : %.2f\n", p->price);
    printf("Supplier Name   : %s\n", p->supplier.name);
    printf("Supplier Place  : %s\n", p->supplier.location);
    free(p);

    return 0;
}