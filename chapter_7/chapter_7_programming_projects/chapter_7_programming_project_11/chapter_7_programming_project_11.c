

#include <stdio.h>

int main(void) {

    int c;
    printf("Enter a first and last name: ");

    char first_name_first_letter = getchar();

    while ((c = getchar()) != ' ')
    {
        continue;
    }
    

    while ((c = getchar()) != '\n'){
        printf("%c", c);
    }
    printf(", %c.\n", first_name_first_letter);

}
