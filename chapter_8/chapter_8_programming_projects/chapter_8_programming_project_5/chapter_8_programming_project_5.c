
#include <stdio.h>
#define NUM_RATES ((int) (sizeof (value) / sizeof (value[0])))
#define INITIAL_BALANCE 100.00

int main (void)
{
    int i, low_rate, num_years, year;
    double value[5], monthly_rate;
    printf("Enter interest rate: ");
        scanf("%d", &low_rate);
    printf("Enter number of years: ");
        scanf("%d", &num_years);
    
    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++) {
        printf ("%6d%%", low_rate + i) ;
        value[i] = INITIAL_BALANCE;
    }

    printf("\n");

        
        for (int month = 1; (month / 12) <= num_years; month++){

            for (i = 0; i < NUM_RATES; i++) {
            monthly_rate = (low_rate + i) / 12.0;
            value[i] += (monthly_rate) / 100.0 * value[i];
            }      
            if (month % 12 == 0) {
                printf("%3d     ", month / 12);
                for (i = 0; i < NUM_RATES; i++) {
                    printf("%7.2f", value[i]); 
                }
                printf("\n");
                }
        }
    return 0;
}
