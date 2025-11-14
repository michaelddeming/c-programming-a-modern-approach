
#include <stdio.h>

int main(void) {
    float income, tax;

    printf("Enter taxable income: ");
    scanf("%f", &income);
    if (income < 750.0f)
        tax = income * .01f;
    else if (750.0f <= income && income < 2250.0f)
        tax = 7.50f + ((income - 750.0f) * 0.02f);
    
    else if (2250.0f <= income && income < 3750.0f)
        tax = 37.50f + ((income - 2250.0f) * 0.03f);
    
    else if (3750.0f <= income && income < 5250.0f)
        tax = 82.50f + ((income - 3750.0f) * 0.04f);
    
    
    else if (5250.0f <= income && income < 7000.0f)
        tax = 142.50f + ((income - 5250.0f) * 0.05f);
    
    else
        tax = 230.0f + ((income - 7000.0f) * 0.06f);
    
    printf("Calculated tax owed: $%.2f\n", tax);

    return 0;
}


