



#include <stdio.h>

int main(void) {

    int digits[15];

    printf("Enter a phone number: ");
    int i = 0;
    char c; 
    while (( c = getchar()) != '\n'){
        
        if (i > 15) {
            printf("Phone number overflow!\n"); 
            return 1;
        }

        if ('A' == c || c == 'B' || c == 'C') 
            digits[i] = 2;
        else if ('D' == c || c == 'E' || c == 'F')
            digits[i] = 3;
        else if ('G' == c || c == 'H' || c == 'I')
            digits[i] = 4;
        else if ('J' == c || c == 'K' || c == 'L')
            digits[i] = 5;
        else if ('M' == c || c == 'N' || c == 'O')
            digits[i] = 6;
        else if ('P' == c || c == 'Q' || c == 'R' || c == 'S')
            digits[i] = 7;
        else if ('T' == c || c == 'U' || c == 'V')
            digits[i] = 8;
        else if ('W' == c || c == 'X' || c == 'Y' || c == 'Z')
            digits[i] = 9;
        else digits[i] = c;

        printf("VALS: %d\n", digits[i]);
        i++;
    }
    printf("In numeric form: ");

    for (int j = 0; j < i; j++) {
        
        if (digits[j] < 10)
            printf("%d", digits[j]);
        else printf("%c", digits[j]);
    }
    printf("\n");
}

