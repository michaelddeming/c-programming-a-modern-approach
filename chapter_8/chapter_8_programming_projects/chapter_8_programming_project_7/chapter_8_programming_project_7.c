

#include <stdio.h>

int main(void) {

    int rows = 5, cols = 5; 
    int matrix[rows][cols];

    for (int row = 0; row < rows; row++) {

        printf("Enter row %d: ", row);
        
        for (int col = 0; col < cols; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }

    int row_sum[5] = {0};
    int col_sum[5] = {0};

    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j < cols; j++) {

            row_sum[i] += matrix[i][j];
            col_sum[j] += matrix[i][j];
        }    
    }

    printf("Row sums: ");
    for (int i = 0; i < rows; i++){
        printf("%d ", row_sum[i]);
    }
    printf("\n");
        printf("Column sums: ");
    for (int i = 0; i < cols; i++){
        printf("%d ", col_sum[i]);
    }
    printf("\n");

    return 0;
}