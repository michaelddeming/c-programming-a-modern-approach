
#include <stdio.h>

int main(void){

    int amount, twenties, tens, fives;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenties = amount / 20;

    amount -= 20 * twenties;

    tens = amount / 10;

    amount -= 10 * tens;

    fives = amount / 5;

    amount -= 5 * fives;

    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenties, tens, fives, amount);
    return 0;

}