#include <stdio.h>

int main() {
    int speeds[] = {60, 80, 75, 90};
    int max = speeds[0];

    for (int i = 1; i < 4; i++) {
        if (speeds[i] > max)
            max = speeds[i];
    }

    printf("Maximum Speed = %d", max);
    return 0;
}
