

#include <stdio.h>

int main(void) {
    
    int i, j;

    // a)
    i = 6;
    j = i += i;
    printf("%d %d\n", i, j);
    // a output -> "12 12"
    
    // b)
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j);
    // b output -> "3 4"

    // c)
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d\n", i, j);
    // c output -> "warning: implicit conversion from 'double' to 'int' changes value from 2.5 to 2 [-Wliteral-conversion]"

    // d)
    i = 2, j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i, j);
    // d output -> "warning: multiple unsequenced modifications to 'j' [-Wunsequenced]"    
    
    return 0;
}