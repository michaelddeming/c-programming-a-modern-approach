

#include <stdio.h>

int main(void) {

    double total = 1.0, factorial = 1.0, ε;
    
    printf("Enter a ε: ");
    scanf("%lf", &ε);
    int i = 1;
    while (1) {
        factorial *= i;
        double sub_total = (1.0 / factorial);
        
        if (sub_total < ε)
            break;
        
        total += sub_total;
        i++;

    }
    printf("e approx. = %.10f\n", total);
    return 0;

}