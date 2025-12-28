

#include <stdio.h>

int main(void) {

    int n = 10;
    short s = 1;
    long l = 3000000;
    double d = 10.0f;
    long double ld = 100.0f;

    printf("Size of int: %zu\n", sizeof (n));
    printf("Size of short: %zu\n", sizeof (s));
    printf("Size of long: %zu\n", sizeof (l));
    printf("Size of double: %zu\n", sizeof (d));
    printf("Size of long double: %zu\n", sizeof (ld));
}