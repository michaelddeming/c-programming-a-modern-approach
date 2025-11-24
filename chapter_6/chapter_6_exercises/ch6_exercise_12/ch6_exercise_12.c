
#include <stdio.h>

int main(void) {
    int n = 10;
    for (int d = 2; d * d < n; d++)
        if (n % d == 0)
            break;
}