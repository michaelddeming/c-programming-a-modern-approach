/* Computes a Universal Product Code check digit */

#include <stdio.h>
int main(void) {
    

    long long num;
    int first,second,third,forth,fifth,sixth,seventh,eighth,ninth,tenth,eleventh,twelfth,first_sum,second_sum,total;

    printf("Enter the first 12 digits of a UPC: ");
    scanf("%lld", &num);

    twelfth = num % 10;
    num /= 10;
    eleventh = num % 10;
    num /= 10;
    tenth = num % 10;
    num /= 10;
    ninth = num % 10;
    num /= 10;
    eighth = num % 10;
    num /= 10;
    seventh = num % 10;
    num /= 10;
    sixth = num % 10;
    num /= 10;
    fifth = num % 10;
    num /= 10;
    forth = num % 10;
    num /= 10;
    third = num % 10;
    num /= 10;
    second = num % 10;
    num /= 10;
    first = num % 10;
    num /= 10;


    first_sum = second + forth + sixth + eighth + tenth + twelfth;
    second_sum = first + third + fifth + seventh + ninth + eleventh;
    total = 3 * first_sum + second_sum;
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    return 0;


}