#include <stdio.h>

int main(void) {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int num_digits = num < 10 ? 1 : num < 100 ? 2 : num < 1000 ? 3 : num < 10000 ? 4 : 0;
    if (num_digits != 0)
        printf("The number %d has %d digits\n", num, num_digits);
    else printf("Error the number %d must be less than 10,000", num);

}