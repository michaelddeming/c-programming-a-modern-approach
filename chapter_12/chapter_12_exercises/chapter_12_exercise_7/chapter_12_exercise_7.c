

#include <stdio.h>
#include <stdbool.h>

#define N 10

bool search(const int a[], int n, int k) {

    int *start = a, *end = a + n;

    for ( ; start < end ; start++) {
        if (*start == k) return true;
    }
    return false;
}

int main(void) {

    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    bool res = search(a, N, 11);
    printf("%d\n", res);
}