

#include <stdio.h>

int main(void) {

    // int N = 10;
    // for (int i = 0; i < N; i++);

    // char ch = 65;
    // printf("%c", ch);
    // return 0;

    int a[66] = {1, 2, 3, [65] = 99};

    printf("%d", a['A']);


}

/* In C, character constants have integer values, so characters can be
   used as array subscripts within range. This is portable only when
   the program does not assume a specific character encoding (e.g., ASCII). */