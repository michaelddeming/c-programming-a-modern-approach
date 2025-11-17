

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    /* There is a flaw in the question, the code only works for dates within the same century. We need additional context from the user (4 digit years) in order to compare across multiple centuries. */

    int first_month, first_day, first_year, second_month, second_day, second_year;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &first_month, &first_day, &first_year);
    
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &second_month, &second_day, &second_year);

    if ((first_year < second_year) || (first_year == second_year && first_month < second_month) || (first_year == second_year && first_month == second_month && first_day < second_day))
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", first_month, first_day, first_year, second_month, second_day, second_year);
    else if (first_year == second_year && first_month == second_month && first_day == second_day) {
        printf("%.2d/%.2d/%.2d is equal to %.2d/%.2d/%.2d\n", first_month, first_day, first_year, second_month, second_day, second_year);
    }
    else 
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", second_month, second_day, second_year, first_month, first_day, first_year);

}