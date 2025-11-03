
#include <stdio.h>

int main(void) {

    float x = 1.23456789f;
    // a)
    printf("%-8.1e", x);
    printf("\n");
    // b)
    printf("%10.6e", x);
    printf("\n");
    // c)
    printf("%-8.3f", x);
    printf("\n");
    // d)
    printf("%6.0f", x);
}