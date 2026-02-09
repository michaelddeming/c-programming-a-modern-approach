
#include <stdio.h>

int fact(int n) {

    return n <= 1 ? 1 : n * fact(n - 1);
}

int main(void) {
    int n = 5;
    int res = fact(5);
    printf("Factorial %d: %d\n", n, res);
}



