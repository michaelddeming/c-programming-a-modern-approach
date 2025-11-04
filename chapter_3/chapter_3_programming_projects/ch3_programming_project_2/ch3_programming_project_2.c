
#include <stdio.h>

int main(void) {

    int number, month, day, year;
    float price;


    printf("Enter item number: ");
    scanf("%d", &number);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n    \t\tPrice\t\tDate\n%-3d\t\t$%7.2f\t%2.2d/%2.2d/%4.4d\n", number, price, month, day, year);
    return 0;
}