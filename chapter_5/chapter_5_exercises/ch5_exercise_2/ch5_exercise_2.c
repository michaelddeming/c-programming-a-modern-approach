

#include <stdio.h>

int main(void) {
    int i, j, k;
    // a)
    i = 10; j = 5;
    printf("%d\n", !i < j);
    // a output -> "1"

    // b)
    i = 2; j = 2;
    printf("%d\n", !!i + !j);
    // b output -> "1"

    // c)
    i = 5; j = 0; k = -5;
    printf("%d\n", i && j || k);
    // c output -> "1"

    // d)
    i = 2; j = 2; k = 3;
    printf("%d\n", i < j || k);
    // d output -> "1"
}