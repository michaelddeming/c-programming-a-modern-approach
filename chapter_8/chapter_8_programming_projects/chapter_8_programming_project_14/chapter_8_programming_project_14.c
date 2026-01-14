
#include <stdio.h>

int main(void) 
{


    char c, punc;
    char letters[50];
    int i = 0;
    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n') {

        if (c == '?' || c == '!' || c == '.')
            punc = c;
        else {
            letters[i] = c;
            i++;
        }
    }

    for (int j = i - 1; j >= 0 ; j--) {
        
        if (j == 0) {
            for (int k = j; k < i; k++) {

                    if (letters[k] == ' ') break;
                    printf("%c", letters[k]);
                }
        }

        else if (letters[j] == ' ') {
            
                for (int k = j + 1; k < i; k++) {

                    if (letters[k] == ' ') break;
                    printf("%c", letters[k]);
                }
            
            printf(" ");
            
            }
        
        }
    
    printf("%c\n", punc);
}
