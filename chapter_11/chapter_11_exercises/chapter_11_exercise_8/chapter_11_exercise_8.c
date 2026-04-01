

#include <stdio.h>

int *find_largest(int a[], int n) {

    if (n == 0) return NULL;
    
    int *largest = &a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > *largest) {
            largest = &a[i];
        }

    }
    return largest;
}

int main(void) {

    int a[] = {0, 1, 6, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int *largest = find_largest(a, n);
    printf("Largest: %d\n", *largest);
}