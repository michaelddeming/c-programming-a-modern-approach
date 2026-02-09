#include <stdbool.h>
#include <stdio.h>


bool has_zero(int a[], int n) {

    int i;

    for (i = 0; i < n; i++) {
        if (a[i] == 0) return true;
    }
    return false;
}

int main(void) {

    int a[5] = {1, 1, 1, 1, 1};

    bool res = has_zero(a, 5);
    printf("%s\n", res ? "True": "False");
}