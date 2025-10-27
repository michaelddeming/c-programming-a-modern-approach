
#include <stdio.h>

int main(void) {
    
    int x;

    printf("Enter X Value: ");
    scanf("%d", &x);

    int res = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("Result: %d\n", res);
    return 0;
}