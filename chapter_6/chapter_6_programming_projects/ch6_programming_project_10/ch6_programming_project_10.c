

#include <stdio.h>
#include <stdbool.h>

int main(void) {


    int month, day, year, ear_month = 13, ear_day = 32, ear_year = 9999;
    bool found = false;

    while (1){
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        
        if (month == 0 && day == 0 && year == 0){
            break;
        }
        else if ((year < ear_year) || (year == ear_year && month < ear_month) || (year == ear_year && month == ear_month && day < ear_day)) {
            found = true;
            ear_month = month;
            ear_day = day;
            ear_year = year;
        }
    }
    if (found) 
        printf("%d/%d/%d is the earliest date\n", ear_month, ear_day, ear_year);
    else
        printf("No date found.\n");
    return 0;
    
}