
#include <stdio.h>

int main(void) {

    


    printf("Enter an expression: ");

    float curr_num, total = 0.0f;
    char c;
    scanf(" %f", &total);

    while (1) {
        do {
        c = getchar();
    } while (c == ' ');

        if (c == '\n') break;
        
        scanf(" %f", &curr_num);

        if (c == '+') {
            total += curr_num;
        }
        else if (c == '-') {
            total -= curr_num;
        }
        else if (c == '*') {
            total *= curr_num;
        }
        else if (c == '/') {
            total /= curr_num;
        }
    }

    printf("Value of expression: %f\n", total);

}