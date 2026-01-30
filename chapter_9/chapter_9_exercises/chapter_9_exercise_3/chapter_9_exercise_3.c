
#include <stdio.h>


int gcd(int m, int n) {

    while (n != 0) {
        
        int rem = m % n;
        m = n;
        n = rem;

    }
    return m;
}


int main(void) {

    int n, m;

    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);
    int res = gcd(n, m);
    printf("Greatest common divisor: %d\n", res);
    return 0;
}