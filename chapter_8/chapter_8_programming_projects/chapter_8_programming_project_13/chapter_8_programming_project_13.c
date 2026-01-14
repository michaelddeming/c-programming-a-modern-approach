

#include <stdio.h>

int main(void) {

    int c;
    char lastname[20];
    printf("Enter a first and last name: ");

    char first_name_first_letter = getchar();

    while ((c = getchar()) != ' ')
    {
        continue;
    }
    
    int i = 0;
    while ((c = getchar()) != '\n'){
        // printf("%c", c);
        lastname[i] = c;
        i++;
    }
    

    for (int j = 0; j < i; j++) {
        printf("%c", lastname[j]);
    }
    printf(", %c.\n", first_name_first_letter);
    return 0;

}
