
/*

Answer: 

The first %d reads until it hits a non-digit. i = 12. 

%s reads until it hits whitespace. It does not care about digits vs. letters. s = abc34. 

The last %d reads until it it hits a non-digit, skipping the whitespace automatically that scanf left off on.
*/ 

#include <stdio.h>

int main(void) {

    int i, j;
    char s[100];

    scanf("%d%s%d", &i, s, &j);
    printf("i = %d, s = %s, j = %d\n", i, s, j);
}