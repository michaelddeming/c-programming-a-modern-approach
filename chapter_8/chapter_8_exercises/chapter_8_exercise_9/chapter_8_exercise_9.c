
#include <stdio.h>

int main(void) {

    int days = 30, hours = 24; 
    float temperature_readings[days][hours] = {0}; //C99+

    float total = 0.0f;
    for (int day = 0; day < days; day++) {

        for (int hour = 0; hour < hours; hour++) {
            total += temperature_readings[day][hour];

        }
    }

    printf("Average Monthly Temp.: %f\n", (total / (days * hours)));

}