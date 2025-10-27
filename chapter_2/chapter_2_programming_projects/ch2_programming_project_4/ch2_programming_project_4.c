

#include <stdio.h>

int main(void){

    float money;
    
    printf("Enter dollars and cents: ");
    scanf("%f", &money);
    // OR
    // int dollars, cents;
    // scanf("%d.%d", &dollars, &cents);
    // money = dollars + cents / 100.0f;
    


    printf("With tax added: $%0.2f\n", (money*1.05));
    return 0;


}