#include <stdio.h>

int main(void) {

    // a)
    int i, j, k;

    i = 2; j = 3;
    k = i * j == 6;
    printf("%d\n", k);
    // a output -> "1"
    // * has higher precendence than ==

    // b)
    i = 5; j = 10; k = 1;
    printf("%d\n", k > i < j);
    // b output -> "1"

    // c)
    i = 5; j = 0; k = -5;
    printf("%d\n", i && j || k);
    // c output -> "1"

    // d)
    i = 1; j = 2; k = 3;
    printf("%d\n", i < j || k);
    // d output -> "1"
}