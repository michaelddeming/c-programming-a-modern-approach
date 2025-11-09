#include <stdio.h>

int main(void) {
    
    int i, j;

    // a)
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d\n", i, j);
    // a output -> "6 16"
    
    // b)
    i = 5; 
    j = 3 - 2 * i++;
    printf("%d %d\n", i, j);
    // b output -> "6 -7"

    // c)
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n", i, j);
    // c output -> "6 23"
    
    // d)
    i = 7;
    j = 3 + --i * 2;
    printf("%d %d\n", i, j);
    // d output -> "6 15"    
    return 0;
}