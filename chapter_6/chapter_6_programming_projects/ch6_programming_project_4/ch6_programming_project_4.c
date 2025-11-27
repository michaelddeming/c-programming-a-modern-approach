
#include <stdio.h>

int main(void) {

    float value, commission;

    while (value != 0) {

        printf("Enter value of trade: ");
        scanf("%f", &value);


        if (value == 0)
            break;
        // calc commission

        else if (value < 2500.00f)
            commission = 30.00f + 0.017f * value;

        else if (value >= 2500.00f && value < 6250.00f)
            commission = 56.00f + 0.0066f * value;

        else if (value >= 6520.00f && value < 20000.00f)
            commission = 76.00f + 0.0034f * value;

        else if (value >= 20000.00f && value < 50000.00f)
            commission = 100.00f + 0.0022f * value;

        else if (value >= 50000.00f && value < 500000.00f)
            commission = 155.00f + 0.0011f * value;
        else
            commission = 255.00f + 0.0009f * value;

        if (commission < 39.00f)
            commission = 39.00f;
        printf("Commission: $%.2f\n", commission);
    }
    return 0;

}