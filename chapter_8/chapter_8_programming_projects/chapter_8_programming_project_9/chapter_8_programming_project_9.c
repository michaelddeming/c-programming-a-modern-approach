

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void) {
    srand(time(NULL));
    char dir[4] = {'N', 'E', 'S', 'W'};
    char matrix[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {

        for (int j = 0; j < SIZE; j++) {

        matrix[i][j] = '.';

        }
    }
    char ch = 'B';
    int row = 0, col = 0;
    matrix[row][col] = 'A';
    while (ch <= 'Z') {

        int blocked = 1;

        if (row > 0 && matrix[row - 1][col] == '.') 
            blocked = 0;
        if (row < SIZE - 1 && matrix[row + 1][col] == '.') 
            blocked = 0;

        if (col > 0 && matrix[row][col - 1] == '.') 
            blocked = 0;
        if (col < SIZE -1 && matrix[row][col + 1] == '.') 
            blocked = 0;          
        if (blocked)
            break;
    
        int dir_index = rand() % (sizeof(dir) / sizeof(dir[0]));

        switch (dir_index) {

            case 0:
                if (row > 0 && matrix[row - 1][col] == '.') {
                    row--;
                    matrix[row][col] = ch++;
                 
                }
                break;
            case 1:
                if (col < SIZE - 1 && matrix[row][col + 1] == '.') {
                    col++;
                    matrix[row][col] = ch++;
                  
                }
                break;
            case 2:
                if (row < SIZE - 1 && matrix[row + 1][col] == '.') {
                    row++;
                    matrix[row][col] = ch++;   
                }
                break;
            case 3:
                if (col > 0 && matrix[row][col - 1] == '.') {
                    col--;
                    matrix[row][col] = ch++;
                }
                break;             
        }
    }

        for (int i = 0; i < SIZE; i++) {

            for (int j = 0; j < SIZE; j++) {

                printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
}

