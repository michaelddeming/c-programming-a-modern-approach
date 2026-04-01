
#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day) {

    int cal[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cal[1] = 29;
    }

    for (int i = 0; i < (sizeof(cal) / sizeof(cal[0])); i++) {
        int rem_days = day_of_year - cal[i];
        if (rem_days == 0) {
            *month = i + 1;
            *day = cal[i];
            break;
        }
        else if (rem_days < 0) {
            *month = i + 1;
            *day = day_of_year;
            break;
        }
        else day_of_year = rem_days;
    }
}


int main(void) {

    int day_of_year = 61;
    int year = 2024;
    int month, day;
    split_date(day_of_year, year, &month, &day);
    printf("%d/%d/%d\n", month, day, year);

}