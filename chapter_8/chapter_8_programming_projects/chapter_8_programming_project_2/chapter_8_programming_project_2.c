
#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int digit_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
    }

    printf("%-12s", "Digits:");
    for (int i = 0; i < 10; i++)
        printf("%2d", i);
    printf("\n");

    printf("%-12s", "Occurences:");
    for (int i = 0; i < 10; i++)
        printf("%2d", digit_seen[i]);
    printf("\n");
    return 0;
}