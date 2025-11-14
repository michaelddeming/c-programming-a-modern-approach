
#include <stdio.h>

int main(void) {
    int speed;

    printf("Enter speed (knots): ");
    scanf("%d", &speed);
    if (speed < 1)
        printf("Calm\n");
    else if (1 <= speed && speed <= 3)
        printf("Light air\n");
    else if (4 <= speed && speed <= 27)
        printf("Breeze\n");
    else if (28 <= speed && speed <= 47)
        printf("Gale\n");
    else if (48 <= speed && speed <= 63)
        printf("Storm\n");
    else
        printf("Hurricane\n");

    return 0;
}


