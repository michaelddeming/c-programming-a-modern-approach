


#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(void) {
    day_of_year(06, 21, 2016);
    return 0;
}

int day_of_year(int month, int day, int year) {

    int total_days = 365;
    int feb = 28;
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
        total_days += 1;     
        feb += 1;   
    }

    int res = 0;
    // month 7 and month 8 31 days, month 2 28/29 days
    for (int i = 1; i < month; i++) {

        if (i == 2) 
            res += feb;
        else if (i == 8) 
            res += 31;
        else if (i % 2 == 0)
            res += 30;
        else res += 31; 
        
    }

    res += day;
    printf("Day of the year: %d\n", res);
    return res;

}