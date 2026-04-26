
/*

a) 14 first add 3 the the pointer address (move three address places forward) then deref.
b) 34
c) 4
d) True
e) False
*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];

    printf("a) %d\nb) %d\nc) %ld\nd) %s\ne) %s\n", *(p+3), *(q-3), (q-p), (p < q) ? "True": "False", (*p < *q) ? "True": "False");
}