

#include <stdio.h>

int gcd(int m, int n) {

    if (n == 0) return m;

    return gcd(n, m % n);
}

int main(void) {

    int n = 10, m = 8;

    int res = gcd(m, n);
    printf("GCD of %d and %d: %d\n", n, m, res);

}