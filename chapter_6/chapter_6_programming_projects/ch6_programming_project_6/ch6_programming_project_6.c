

#include <stdio.h>

int main(void) {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; (i * i) <= num; i+=2) {

        int squared = i * i;
        printf("%d\n", squared);
    }

    return 0;
}   