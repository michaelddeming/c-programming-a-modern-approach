

#include <stdio.h>

int max(int, int []);
float average(int, int []);
int pos_count(int, int []);

int main(void) {

    int n = 10;
    int a[] = {0,1,2,3,4,5,6,7,8,9};

    int m = max(n, a);
    int avg = average(n, a);
    int pc = pos_count(n, a);
    return 0;
}

int max(int n, int a[n]) {

    int m = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > m)
            m = a[i];
    }
    printf("Max=%d\n", m);
    return m;
}   

float average(int n, int a[n]) {

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
    }
    float avg = (float) total / n;
    printf("Average=%.2f\n", avg);
    return avg;
}

int pos_count(int n, int a[n]) {

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            count += 1;
    }
    printf("Positive Count=%d\n", count);
    return count;
}   
