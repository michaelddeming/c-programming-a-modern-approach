

#include <stdio.h>

int main(void){


    float amount, rate, payment, months_paid;
    printf("Enter, amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number of months paid: ");
    scanf("%f", &months_paid);
    
    float monthly_rate = (rate / 100.0f) / 12;

    for (int i = 0; i < months_paid; i++){
        float remaining_balance = (amount + (amount * monthly_rate)) - payment;
        amount = remaining_balance;
        printf("Balance after Payment #%d = %.2f\n", (i + 1), remaining_balance);
    }
    return 0;
}