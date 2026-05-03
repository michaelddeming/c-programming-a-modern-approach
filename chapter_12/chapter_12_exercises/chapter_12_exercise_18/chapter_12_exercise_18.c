


#include <stdio.h>

int evauluate_position(char board[8][8]) {

    int res = 0;

    for (char *p = *board; p < (*board + (8*8)); p++) {
        switch (*p) {
        case 'Q': res += 9; break;
        case 'q': res -= 9; break;
        case 'R': res += 5; break;
        case 'r': res -= 5; break;
        case 'B': case 'N': res += 3; break;
        case 'b': case 'n': res -= 3; break;
        case 'P': res += 1; break;
        case 'p': res -= 1; break;
        }
    
}
    return res;

}



int main(void) {

    char board[8][8] = {
            {'r', 'n', 'b', 'q', 'k', 'b', '.', 'r'},
            {'p', 'p', '.', 'p', 'p', 'p', 'p', '.'},
            {'.', '.', 'p', '.', '.', 'n', '.', '.'},
            {'.', '.', '.', '.', '.', '.', '.', 'p'},
            {'.', '.', '.', 'P', 'P', '.', '.', '.'},
            {'.', '.', 'N', '.', '.', 'N', '.', '.'},
            {'P', 'P', 'P', '.', '.', 'P', 'P', 'P'},
            {'R', '.', 'B', 'Q', 'K', 'B', '.', 'R'},
        };

        printf("%d\n", evauluate_position(board));
        return 0;


}