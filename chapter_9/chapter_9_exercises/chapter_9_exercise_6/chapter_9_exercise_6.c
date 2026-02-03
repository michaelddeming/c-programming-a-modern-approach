
#include <stdio.h>

int digit(int n, int k) {

    while (n > 0 && k >= 1) {

        int rem = n % 10;
        n /= 10;
        if (--k == 0) return rem;
    }
    return n;
}

int main(void) {

    printf("%d\n", digit(829, 5));
}