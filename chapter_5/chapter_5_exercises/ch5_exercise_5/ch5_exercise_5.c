// No the statement is NOT legal. You need to use logical and statement in order to compare 2 truthy/falsey conditionals for a variable.

// When n is equal to 0, n >= 1 is false, resulting in 0 <= 10, which is true, resulting in. the printing of the statement. But n = 0 and so the statement is actually incorrect.

#include <stdio.h>

int main(void) {

    int n = 5;
    if (1 <= n && n <= 10){
        printf("n is between 1 and 10\n");
    }
    else {
        printf("n is not between 1 and 10\n");
    }
}