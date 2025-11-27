
#include <stdio.h>

int main(void) {

    float num, max = 0.0f;


    while (1) {

        printf("Enter a number: ");
        scanf("%f", &num);
        
        if (num <= 0.0){
            break;
        }
        else if (num > max) {
            max = num;
        }
    }
    printf("The largest number entered was %g\n", max);
    return 0;
    // used %g as the conversion spec. in printf for clean printing like book example.
}