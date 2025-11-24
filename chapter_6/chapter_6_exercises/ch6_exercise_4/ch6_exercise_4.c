
#include <stdio.h>

int main(void) {
    
    // for (int i = 0; i < 10; i++)
    // for (int i = 0; i < 10; ++i)
    for (int i = 0; i++ < 10;)
    printf("%d ", i);
    /* C is the odd statement out, before entering the for statement the conditional expression is evaluated, thus causing an increase in i before entering. This causes i to lead by 1.*/
}