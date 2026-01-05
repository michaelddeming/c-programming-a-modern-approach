

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    bool digit_seen[10] = {false};
    bool repeated[10] = {false};
    bool rep = false;
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {

        digit = n % 10;
        if (digit_seen[digit]) {
            rep = true;
            repeated[digit] = true;
        }
        else
            digit_seen[digit] = true;
        n /= 10;
    }

    
    if (rep) {
        printf("Repeated digit(s): ");
        for (int i = 0; i < 10; i++) {
            if (repeated[i])
                printf("%d ", i);
        }
        printf("\n");
        }
    else
        printf("No repeated digit(s)\n");

    return 0;
}