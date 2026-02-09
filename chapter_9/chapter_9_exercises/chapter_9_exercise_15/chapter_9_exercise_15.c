
#include <stdio.h>

double median(double x, double y, double z) {

    double a[3] = {x, y, z};

    double max = a[0];
    double min = a[0];
    double sum = a[0];

    for (int i = 1; i < 3; i++) {

        sum += a[i];

        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    return (sum - max - min);



}   
int main(void) {

    printf("Median: %lf\n", median(55.0f, 24.0f, 2.0f));
}