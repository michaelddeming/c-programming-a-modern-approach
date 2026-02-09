
#include <stdio.h>

int evaluate_position(char board[8][8]);

int main(void) {

    char board[8][8] = {{'K','Q','R'},
                        {'k','q','r','b','n'}};
    int result = evaluate_position(board);
    
    if (result > 0) printf("White is winning by %d point(s)\n", result);
    else if (result == 0) printf("The score is tied\n");
    else printf("Black is winning by %d point(s)\n", result * -1);
    return 0;
}

int evaluate_position(char board[8][8]) {
    int result = 0;
    for (int i = 0; i < 8; i++) {

        for (int j = 0; j < 8; j++) {

            printf("%c", board[i][j]);
            switch (board[i][j]) {
                case 'K': result += 13; break;
                case 'k': result -= 13; break;
                case 'Q': result += 9; break;
                case 'q': result -= 9; break;
                case 'R': result += 5; break;
                case 'r': result -= 5; break;
                case 'B': case 'N': result += 3; break;
                case 'b': case 'n': result -= 3; break;
                case 'P': result += 1; break;
                case 'p': result -= 1; break;
            }
        
        }
        printf("\n");
    }
    return result;
}