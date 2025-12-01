
#include <stdio.h>

int main(void){

    float amount, rate, payment;
    printf("Enter, amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    float monthly_rate = (rate / 100.0f) / 12;

    float month_one_balance = (amount + (amount * monthly_rate)) - payment;
    float month_two_balance = (month_one_balance + (month_one_balance * monthly_rate)) - payment;
    float month_three_balance = (month_two_balance + (month_two_balance * monthly_rate)) - payment;

    printf("Balance remaining after first payment: $%0.2f\n", month_one_balance);
    printf("Balance remaining after second payment: $%0.2f\n", month_two_balance);
    printf("Balance remaining after third payment: $%0.2f\n", month_three_balance);
    return 0;
}