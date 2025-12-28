
#include <stdio.h>

int main(void) {

    int num1, denom1, num2, denom2, result_num, result_denom;
    char c;

    printf("Enter two fractions separated by a sing (+, -, *, /): ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &c, &num2, &denom2);
    if (denom1 == 0 || denom2 == 0){
        printf("Error: Division by zero.\n");
        return 1;
    }
    if (c == '+'){
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (c == '-') {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (c == '*') {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
    }
    else if (c == '/') {
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
    }
    
    printf("The result is %d/%d\n", result_num, result_denom);

    return 0;
}