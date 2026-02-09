
#include <stdio.h>

double inner_product (double a[], double b[], int n) {

    double total = 0;
    for (int i = 0; i < n; i++) {

        total += (a[i] * b[i]);
    }
    return total;

}

int main(void) {
    int n = 5;
    double a[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    double b[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};

    
    printf("Inner product: %lf\n", inner_product(a, b, 5));
    return 0;
}