

#include <stdio.h>

int main(void) {

    int days, start;
    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    if (days < 1 || days > 31) {
        printf("Error: Invalid number of days.");
    }
    else if (start < 1 || start > 7) {
        printf("Error: Invalid start day.");
    }
    else {
        int start_copy = start;
        while (start > 1) {
            printf("   ");
            start -= 1;
        }
        for (int i = 1; i <= days; i++) {
            
            if ((i + start_copy - 1) % 7 == 0) {
                printf("%2d\n", i);
            }
            else
                printf("%2d ", i);
        }
    }
}   