

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


void read_word(int counts[26]) {

    char c;

    while ((c = getchar()) != '\n') {
        
        if (isalpha(c))
            counts[tolower(c) % 26] += 1;

    }
}

bool equal_array(int counts1[26], int counts2[26]) {
    for (int i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i]) {
            return false;
        }
    }
    return true;
}

int main(void) {

    int abetfrst[26] = {0};
    int abetscnd[26] = {0};

    printf("Enter first word: ");
    read_word(abetfrst);
    printf("Enter second word: ");
    read_word(abetscnd);

    
    if (equal_array(abetfrst, abetscnd)) 
        printf("The words are anagrams!\n");
    else 
        printf("The words are not anagrams.\n");
    return 0;

}