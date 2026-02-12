

/* 

n = 3

1. n = 3, n != 0 TRUE, pb(3 / 2)
    2. n = (3 / 2) = 1, n != 0 TRUE, pb(1 / 2)
        3. n = (1 / 2) = 0, n != 0 FALSE
    4. putchar('0' + 1 % 2)
5. putchar('0' + 3 % 2)

results in "11" which is the binary representation of the positive integer 3 without leading zeros.
*/

#include <stdio.h>


void pb(int n) {
    // prints the binary representation of n
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
    
}

int main(void) {

    pb(576);
    printf("\n");
    return 0;
}

