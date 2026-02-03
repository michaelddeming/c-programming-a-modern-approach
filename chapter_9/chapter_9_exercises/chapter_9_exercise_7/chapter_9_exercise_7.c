
#include <stdio.h>

int f(int a, int b) {

    printf("Success\n");
    return 0;
}

int main(void) {

    int i;
    double x;

    i = f(83,12);
    x = f(83,12);
    i = f(3.15,9.28);
    x = f(3.15,9.28);
    f(3.15,9.28);
    
    // this will compile (in C99) but will throw warnings for 'implicit conversion double->int' losing the precision of the float/double variables.
}
