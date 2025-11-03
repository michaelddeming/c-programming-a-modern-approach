

#include <stdio.h>

int main(void) {

    // a)
    printf("%6d,%4d", 86, 1040);
    // output -> "    86,1040"
    printf("\n");
    // b)
    printf("%12.5e", 30.253);
    // output -> "  3.02530e+01"
    printf("\n");
    // c)
    printf("%.4f", 83.162);
    // output -> "83.1620"
    printf("\n");
    // d)
    printf("%-6.2g", .0000009979);
    // output -> "1e-06 "
    return 0;
}