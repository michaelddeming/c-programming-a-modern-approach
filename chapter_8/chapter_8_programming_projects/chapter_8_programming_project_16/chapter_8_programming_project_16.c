

#include <stdio.h>
#include <ctype.h>


int main(void) {

    char abetfrst[26] = {0};
    char abetscnd[26] = {0};

    printf("Enter first word: ");

    char c;

    while ((c = getchar()) != '\n') {
        
        if (isalpha(c))
            abetfrst[tolower(c) % 26] += 1;

    }
    
    printf("Enter second word: ");

    while ((c = getchar()) != '\n') {
        
        if (isalpha(c))
            abetscnd[tolower(c) % 26] += 1;

    }

    for (int i = 0; i < 26; i++) {
        if (abetfrst[i] != abetscnd[i]) {

            printf("The words are not anagrams.\n");
            return 1;
        }
    }
    printf("The words are anagrams!\n");
    return 0;

}