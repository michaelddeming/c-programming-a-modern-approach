


#include <stdio.h>

int fact(int n) {
    
    int res = 1;
    
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main(void) {
    int n = 5;
    int res = fact(5);
    printf("Factorial %d: %d\n", n, res);
}



