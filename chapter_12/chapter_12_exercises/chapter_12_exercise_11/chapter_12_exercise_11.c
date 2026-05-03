

#include <stdio.h>

int *find_largest(int a[], int n) {
    int *largest = a;
    if (n > 1) {
        for ( int *p = (a+1); p < (a + n) ; p++) {

            if (*p > *largest) {
                largest = p;
            }

        }
}
    return largest;
    
   
}

int main(void) {

    int a[] = {0, 4, 3, 5, 1};
    int n = (sizeof(a) / sizeof(a[0]));

    printf("Largest: %d\n",*find_largest(a, n));

}