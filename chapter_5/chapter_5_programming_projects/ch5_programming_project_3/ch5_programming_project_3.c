
// Calculates a broker's commission

#include <stdio.h>

int main(void) {

    float commission, value, shares, price_per_share, comp_commission;

    printf("Enter number of shares: ");
    scanf("%f", &shares);
    printf("Enter price per share: ");
    scanf("%f", &price_per_share);

    value = shares * price_per_share;

    if (value < 2500.0f)
        commission = 30.0f + 0.17f * value;
    else if (value < 6250.0f)
        commission = 56.0f + .0066f * value;
    else if (value < 20000.0f)
        commission = 76.0f + .0034f * value;
    else if (value < 50000.0f)
        commission = 100.0f + .0022f * value;
    else
        commission = 255.0f + .0009f * value;

    if (commission < 39.0f)
        commission = 39.0f;

        if (shares < 2000.0f)
            comp_commission = 33.0f + .03f * shares;
        else
            comp_commission = 33.0f + .02 * shares;

    printf("Commission: $%.2f\n", commission);
    printf("Comp. Commission: $%.2f\n", comp_commission);
    return 0;
}

