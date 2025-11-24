
#include <stdio.h>

int main(void) {
    
    for (int i = 9384, first = 1; first || i > 0; i /= 10, first = 0)
    printf("%d ", i);
    /* the do-while statement always will perform the actions within the loop body once, then evaluate the conditional expression. We need to set a 'first' = 1 variable to track the first step into the loop to force execution. Then set first to 0 to only evluate i > 0 condition.
    */ 
}   