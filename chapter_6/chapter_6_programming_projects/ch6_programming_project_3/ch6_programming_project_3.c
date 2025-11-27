
#include <stdio.h>

int main(void) {

    int numer, denom;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numer, &denom);
    
    int m, n = numer;

    while (n != 0) {
        
        int rem = m % n;
        m = n;
        n = rem;

    }

    printf("In lowest terms: %d/%d\n", (numer / m), (denom / m));
    // printf("OG numer: %d, OG denom: %d, n = %d, m = %d", numer, denom, n, m);
    return 0;
}