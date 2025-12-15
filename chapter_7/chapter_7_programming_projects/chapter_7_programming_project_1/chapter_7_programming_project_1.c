

/* Prints a table of squares using a for statement */

#include <stdio.h>
#include <stdint.h>

void square2(long n) {

    printf("This program prints a table of squares.\n");


    for (long i = 3037000400; i <= n; i++){
        printf("%10ld %10ld\n", i, i * i);
    };
}

int main(void) {
    long n = 3037000500;

    square2(n);
    return 0;
}


// when n is an int the smallest value that breaks the program is = 46341
// when n is an short the smallest value that breaks the program is = 182
// when n is an long the smallest value that breaks the program is = 3037000500

// Based on this information, my machine a 2023 Macbook Pro M3 Pro is a 64-bit chip.