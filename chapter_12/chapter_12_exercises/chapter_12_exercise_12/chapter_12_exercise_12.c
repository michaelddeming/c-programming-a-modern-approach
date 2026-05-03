


#include <stdio.h>


void find_two_largest(const int *a, int n, int *largest, int *second_largest) {

    if (n < 2){
        return;
    }

    *largest = *a;
    *second_largest = *(a + 1);

    if (*second_largest > *largest) {
        *largest = *(a + 1);
        *second_largest = *a;
    }

    for (const int *p = (a + 2); p < (a + n); p++){

        if (*p > *largest) {
            *second_largest = *largest;
            *largest = *p;                
        }
        else if (*p > *second_largest) {
            *second_largest = *p;
        }
    }
    return;
}

int main(void) {

    int largest, second_largest, n = 5;

    int a[] = {1, 4, 2, 5, 3};
    find_two_largest(a, n, &largest, &second_largest);
    printf("Largest: %d\nSecond Largest: %d\n", largest, second_largest);
    return 0;
    
    
}