

#include <stdio.h>

int power(int base, int exp) {

    int res = 1;

    for (int i = 0; i < exp; i++) {

        res *= base;
    }
    return res;
}

int compute_poly(int x) {
    return ((3 * power(x, 5)) + (2 * power(x, 4)) - (5 * power(x, 3)) - (power(x, 2)) + (7 * x) - 6);
}

int main(void) {

    int x;
    printf("Enter an integer between 1 and 9 (inclusive): ");
    scanf("%d", &x);
    printf("Result: %d\n", compute_poly(x));

    
    return 0;
}