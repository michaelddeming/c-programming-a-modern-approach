/*
Write a program that declares several int and float variables-without initializing
them-and then prints their values. Is there any pattern to the values? (Usually there isn't.)
*/

#include <stdio.h>

int main(void) {

    int age, num;
    float cash, temp;

    printf("Age: %d\nNum: %d\nCash: %f\nTemp: %f\n", age, num, cash, temp);
}

/*
Results:

Age: 2
Num: 159482032
Cash: 0.000000
Temp: 0.000000

No relation, garbage values due to no initialization of declared vars being printed.

*/