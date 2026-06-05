

#include <stdio.h>


void capitalize(char str[], int n) {

        for (int i = 0; i < n; i++) {

        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = (str[i] - 32);
        }
    }


}


int main() {

    char str[5] = {'h', 'e', 'l', 'l', 'o'};
    int n = (sizeof (str) / sizeof (str[0]));

    capitalize(str, n);

    for (int i = 0; i < n; i++) {
        printf("%c", str[i]);
    }
    printf("\n");



}