
#include <stdio.h>
#include <ctype.h>

int main(void) {

    printf("Enter message: ");

    int ch;
    while ((ch = getchar()) != '\n' ) {
        ch = toupper(ch); //uppercase the char
        switch (ch) {
            case 'A': printf("%d", 4); break;
            case 'B': printf("%d", 8); break;
            case 'E': printf("%d", 3); break;
            case 'I': printf("%d", 1); break;
            case 'O': printf("%d", 0); break;
            case 'S': printf("%d", 5); break;
            default: printf("%c", ch); break;
        }
    }
    printf("!!!!!!!!!!\n");
    return 0;
}