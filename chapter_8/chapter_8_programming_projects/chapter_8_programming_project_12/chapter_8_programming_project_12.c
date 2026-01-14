
#include <stdio.h>
#include <ctype.h>


int main(void) {

    int ch;
    int total = 0;
    int scores[26] = {0, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    // printf("%d\n", sizeof(scores) / sizeof(scores[0]));

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n') {

        unsigned char c = toupper((unsigned char)ch) - 65;
        
        total += scores[c];
    };

    printf("Scrabble value: %d\n", total);
    return 0;

}