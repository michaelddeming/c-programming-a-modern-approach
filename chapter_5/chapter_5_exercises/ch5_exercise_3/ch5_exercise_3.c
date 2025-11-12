
#include <stdio.h>

int main(void) {

    int i, j, k;
    
    // a)
    i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);
    // a output -> "1" and "3 4 5"
    
    
    // b)
    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);
    // b output -> "0" and "7 8 9"

    // c)
    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);
    // c output -> "1" and "8 8 9"

    // d)
    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);
    // d output -> "1" and "2 1 1"   
}