#include <stdio.h>

int main() {
    int contacts[] = {98765, 91234, 99887};
    int key = 11111;

    for (int i = 0; i < 3; i++) {
        if (contacts[i] == key) {
            printf("Contact found");
            return 0;
        }
    }

    printf("Contact not found");
    return 0;
}
