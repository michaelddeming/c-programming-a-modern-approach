

#include <stdio.h>

long power(int x, int n) {

    if (n == 0) {
        return 1;
    }
    else if (n % 2 != 0) 
        return x * power(x, n - 1);
    else {
        long temp = power(x, n / 2);
        return temp * temp;
    }
}

int main(void) {

    int x, n;
    printf("Enter a base value (x): ");
    scanf("%d", &x);
    printf("Enter a exponent value (n): ");
    scanf("%d", &n);
    long res = power(x, n);
    printf("Result of %d^%d: %ld\n", x, n, res);
}

// careful this does not work for negative exponents atm