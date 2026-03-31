
#include <stdio.h>

void swap(int *p, int *q) {

    int temp = *p;
    *p = *q;
    *q = temp;

}


int main(void) {

    int *p, *q;
    int i = 3, j = 6;
    p = &i;
    q = &j;
    printf("Before Swap: *p = %i, *q = %i\n", *p, *q);
    swap(p, q);
    printf("After Swap: *p = %i, *q = %i\n", *p, *q);
    
}