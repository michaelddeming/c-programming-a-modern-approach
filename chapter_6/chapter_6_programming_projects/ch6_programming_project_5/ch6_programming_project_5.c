
#include <stdio.h>

int main(void) {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    do {

        int rem = num % 10;
        printf("%d", rem);
        num = num / 10;
    } while (num != 0);
    printf("\n");
    return 0;
}