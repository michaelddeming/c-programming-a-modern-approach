

#include <stdio.h>

int main(void){

    int x;

    printf("Enter X Value: ");
    scanf("%d", &x);

    int res = ((3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6);
    printf("Result: %d\n", res);
    return 0;

}