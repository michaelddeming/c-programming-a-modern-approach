
#include <stdio.h>

int main(void) {

    printf("This program creats a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\n");

    int size = 0;

    while ((size < 1 || size > 99) || ((size % 2) == 0)){
        printf("Enter size of magic square: ");
        scanf("%d", &size);
    }

    int matrix[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = 0;
        }
    }

    int row = 0, col = size / 2;
    matrix[row][col] = 1;

    for (int i = 2; i <= (size * size); i++) {

        int pr = row, pc = col;

        if (row - 1 < 0)
            row = size - 1;
        else row -= 1;

        if (col + 1 > (size - 1))
            col = 0;
        else col += 1;

        if (matrix[row][col] > 0) {
            pr += 1;
            if (pr > (size - 1))
                pr = 0;
            matrix[pr][pc] = i;
            row = pr;
            col = pc;
        }
        else matrix[row][col] = i;

    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}   