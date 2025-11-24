
#include <stdio.h>

int main(void) {

    int i = 9384;

    do {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);

    // expected output -> "9384 938 93 9 "
    
}