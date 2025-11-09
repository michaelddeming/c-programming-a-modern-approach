

#include <stdio.h>

int main(void){

    // a)
    int i = 5, j = 3;
    printf("%d %d\n", i / j, i % j);

    // a outout -> "1 2"
    
    // b)
    i = 2, j = 3;
    printf("%d\n", (i + 10) % j);
    
    //  b output -> "0"

    // c)
    i = 7, j = 8; int k = 9;
    printf("%d\n", (i + 10) % k / j);

    // c output -> "1"
    
    // d)
    i = 1, j = 2, k = 3;
    printf("%d\n", (i + 5) % (j + 2) / k);

    // c output -> "0"

}