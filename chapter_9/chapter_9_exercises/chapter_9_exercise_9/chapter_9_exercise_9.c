
#include <stdio.h>

void swap(int a, int b);

int main(void) {

    int i = 1, j = 2;

    swap(i, j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

void swap(int a, int b) {

    int temp = a;
    a = b;
    b = temp;
}

// this prints 'i = 1, j = 2' because the values passed into swap function by value and are copied into the parameter variables and locally manipulated and nothing that was changed is either returned, so we lose the functionality that occurred and remain as the original values.