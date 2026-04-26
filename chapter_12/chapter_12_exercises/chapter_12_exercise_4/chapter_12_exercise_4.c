
#include <stdio.h>
#include <stdbool.h>


#define SIZE 100


int a[SIZE];
int *top_ptr = a;

void make_empty(void) {

    top_ptr = a;
}

bool is_empty(void) {
    return top_ptr == a ;
}

bool is_full(void) {

    return top_ptr == a + SIZE;
}