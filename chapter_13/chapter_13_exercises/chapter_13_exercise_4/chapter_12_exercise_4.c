
#include <stdio.h>

int read_line(char str[], int n) {
 
    char *p = str, ch;
    while ((p < (str + n - 1)) && (((ch = getchar()) !='\n') && (ch != ' '))) {
        *p++ = ch;
    }
    *p = '\n';
    return (p - str);
}

int main() {

    char str[10 ];
    int n = 10;

    printf("Enter line: ");
    read_line(str, n);
    
    for (char *p = str; p < (str + n); p++) {
        printf("%c",*p);
    }
    printf("\n");
}