
#include <stdio.h>

int main(void) {

    for (int i = 10; i >= 1; i /= 2)
        printf("%d ", i++);
    // expected output -> "10 5 3 2 1 1 1 1 1 1... (infinite loop)"
}