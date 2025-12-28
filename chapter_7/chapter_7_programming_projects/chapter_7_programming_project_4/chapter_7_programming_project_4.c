


#include <stdio.h>

int main(void) {

    char c;

    printf("Enter a phone number: ");

    while ((c = getchar()) != '\n'){

        if (65 <= c && c <= 67) 
            printf("2");
        else if (68 <= c && c <= 70)
            printf("3");
        else if (71 <= c && c <= 73)
            printf("4");
        else if (74 <= c && c <= 76)
            printf("5");
        else if (77 <= c && c <= 79)
            printf("6");
        else if (80 <= c && c <= 83)
            printf("7");
        else if (84 <= c && c <= 86)
            printf("8");
        else if (87 <= c && c <= 89)
            printf("9");
        else 
            printf("%c", c);
    }
    printf("\n");
    return 0;

}