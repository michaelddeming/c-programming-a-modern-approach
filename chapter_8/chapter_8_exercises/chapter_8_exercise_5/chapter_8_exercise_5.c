

#include <stdio.h>

int main(void) {

    int fib_numbers[40] = {0, 1};

    int len = sizeof(fib_numbers) / sizeof(fib_numbers[0]);

    // for (int i = 0; i < (len - 2); i++) {
    //     fib_numbers[j + 1] = (fib_numbers[i] + fib_numbers[i + 1]);
    // }

    for (int i = 2 ; i < len ; i++) {
        fib_numbers[i] = (fib_numbers[i - 1] + fib_numbers[i - 2]);
    }

    for (int i = 0; i < len; i++) {
        printf("Fib Number %d: %d\n", (i+ 1), fib_numbers[i]);
    }
}