
#include <stdio.h>

int main(void) {

    int n, m;

    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    while (n != 0) {
        
        int rem = m % n;
        m = n;
        n = rem;

    }
    printf("Greatest common divisor: %d\n", m);
    return 0;
}