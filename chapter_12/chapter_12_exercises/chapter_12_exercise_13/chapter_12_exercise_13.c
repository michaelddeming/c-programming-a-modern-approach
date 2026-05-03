

#include <stdio.h>

#define N 10


int main(void) {

    double ident[N][N];

    int count = 1;
    for (double *p = *ident; p < (*ident + (N * N)); p++) {
        
        if (count == N) {
            *p = 1;
            count = 0;
        }
        else (*p = 0);
        count++;
    }


    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
        printf("%.0f", ident[row][col]);
        
        }
        printf("\n");
    }
    return 0;


}