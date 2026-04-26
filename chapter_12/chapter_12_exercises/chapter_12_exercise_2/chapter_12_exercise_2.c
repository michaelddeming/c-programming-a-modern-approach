
#include <stdio.h>

int main(void) {

    int *low, *middle, *high;

    int a[] = {6, 7, 8, 9, 10};
    low = &a[0];
    high = &a[(sizeof(a) / sizeof(a[0]))]; 

    // int mid = sizeof(a) / sizeof(a[0]) / 2;
    // middle = &a[mid];

    middle = low + (high - low) / 2;
    printf("%d\n", (*middle));
}