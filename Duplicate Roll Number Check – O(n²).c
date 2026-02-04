#include <stdio.h>

int main() {
    int a[] = {101, 102, 103, 101};
    int n = 4;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("Duplicate found");
                return 0;
            }
        }
    }

    printf("No duplicates");
    return 0;
}
