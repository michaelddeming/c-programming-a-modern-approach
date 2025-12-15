
#include <stdio.h>

int main(void) {
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    getchar(); //consume the leftover newline char in the input buffer


    for (int i = 1; i <= n; i++){
        printf("%10d %10d\n", i, i * i);
        if (i % 24 == 0) {
            printf("Press Enter to continue...\n");
            getchar();   
        }
    };
    return 0;

}