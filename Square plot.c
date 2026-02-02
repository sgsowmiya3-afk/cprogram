#include <stdio.h>
#include <math.h>

int main() {
    float area, side;

    printf("Enter the area of the square plot: ");
    scanf("%f", &area);

    side = sqrt(area);

    printf("Side length of the square plot = %.2f\n", side);

    return 0;
}