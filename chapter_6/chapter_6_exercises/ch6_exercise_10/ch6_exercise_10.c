

#include <stdio.h>

int main(void) {

    int i = 10;
    start:
        if (i <= 0)
        goto end;
        else if (i % 2 == 0) {
            printf("%d is even\n", i--);
            goto start;
        }
        else {
        printf("%d is odd\n", i--);
        goto start;
    }
    end:
        return 0;
}
    
