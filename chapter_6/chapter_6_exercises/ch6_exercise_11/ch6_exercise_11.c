#include <stdio.h>



int main(void) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (i % 2) // odd values will be skipped
            continue;
        sum += i;
    }
    printf("%d\n", sum);
    // expected output -> "20"
}