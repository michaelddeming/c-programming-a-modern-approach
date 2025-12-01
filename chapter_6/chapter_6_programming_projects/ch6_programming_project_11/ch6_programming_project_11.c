

#include <stdio.h>

int main(void) {


    int n; 
    double total = 1.0, factorial = 1.0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        // carry over the prev factorial value computed on i - 1
        factorial *= i;
        total += (1.0 / factorial);

    }

    // OR more brute forace with a nested loop to handle factorial of denom.
    //     int factorial = i;
    //     for (int j = i - 1; j > 0; j--) {
    //         factorial *= j;
    //     }

    //     total += (1.0f / factorial);
    // }
    printf("e approx. = %f\n", total);
    return 0;

}