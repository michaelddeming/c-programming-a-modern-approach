
// a) "short unsigned int" is a legal type in C with values that are small(ish) positive integers.
// b) "short float" is not legal in C.
// c) "long double" is a legal type in C.
// d) "unsigned long" is a legal type in C with large/positive value range.

#include <stdio.h>

int main(void) {

    // short unsigned int num = 5;

    // printf("%hd\n", num);

    // short float num = 5.0f;

    // printf("%f\n", num);

    // long double num = 5.0f;

    // printf("%Lf\n", num);

    unsigned long num = 5;

    printf("%ld\n", num);
}