
#include <stdio.h>

int main(void) {
    
    for (int i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    printf("%d ", i);
    // loop 1 -> i = 5, j = 4 -> prints "5"
    // loop 2 -> i = 4, j = 3 -> prints "4"
    // loop 3 -> i = 3, j = 2 -> prints "3"
    // loop 4 -> i = 2, j = 1 -> prints "2"
    // loop 5 -> i = 1, j = 0 -> no print takes place, loops breaks
    // expected output -> "5 4 3 2 "
    //  the i > 0 is discarded after evauluation and the loop conditional expression relies upon the j > 0 result.
    

}