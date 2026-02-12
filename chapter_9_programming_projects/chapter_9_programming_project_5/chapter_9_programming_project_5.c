
#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]) {
    int row = 0, col = n / 2;
    magic_square[row][col] = 1;

    for (int i = 2; i <= (n * n); i++) {

        int pr = row, pc = col;

        if (row - 1 < 0)
            row = n - 1;
        else row -= 1;

        if (col + 1 > (n - 1))
            col = 0;
        else col += 1;

        if (magic_square[row][col] > 0) {
            pr += 1;
            if (pr > (n - 1))
                pr = 0;
            magic_square[pr][pc] = i;
            row = pr;
            col = pc;
        }
        else magic_square[row][col] = i;

    }
}

void print_magic_square(int n, int magic_square[n][n]) {
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", magic_square[i][j]);
        }
        printf("\n");
    }
}

int main(void) {

    printf("This program creates a magic square of a specified n.\nThe n must be an odd number between 1 and 99.\n");

    int n = 0;

    while ((n < 1 || n > 99) || ((n % 2) == 0)){
        printf("Enter n of magic square: ");
        scanf("%d", &n);
    }

    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }

    create_magic_square(n, matrix);
    print_magic_square(n, matrix);
    return 0;
}   