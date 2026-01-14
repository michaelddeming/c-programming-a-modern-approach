
#include <stdio.h>

int abs(int a){
    return (a < 0) ? -(a) : a;
}

int main(void) {
    int hours, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    if ((hours < 0 || hours > 23) || (minutes < 0 || minutes > 59)) {
        printf("Invalid 24-hour time.\n");
        return 1;
    }

    int time_in_minutes = (hours * 60) + minutes;
    

    int eight_00_am, nine_43_am, eleven_19_am, twelve_47_pm, two_00_pm, three_45_pm,
    seven_00_pm, nine_45_pm;
    
    eight_00_am = 8 * 60 + 0;
    nine_43_am = 9 * 60 + 43;
    eleven_19_am = 11 * 60 + 19;
    twelve_47_pm = (0 + 12)  * 60 + 47;
    two_00_pm = (2 + 12) * 60 + 0;
    three_45_pm = (3 + 12) * 60 + 45;
    seven_00_pm = (7 + 12) * 60 + 0;
    nine_45_pm = (9 + 12) * 60 + 45;

    int ten_16_am, eleven_52_am, one_31_pm, three_00_pm, four_08_pm, five_55_pm,
    nine_20_pm, eleven_58_pm;
    
    ten_16_am = 10 * 60 + 16;
    eleven_52_am = 11 * 60 + 52;
    one_31_pm = 1 * 60 + 31;
    three_00_pm = (3 + 12)  * 60 + 0;
    four_08_pm = (4 + 12) * 60 + 8;
    five_55_pm = (5 + 12) * 60 + 55;
    nine_20_pm = (9 + 12) * 60 + 20;
    eleven_58_pm = (11 + 12) * 60 + 58;

    int departures[8] = {eight_00_am, nine_43_am, eleven_19_am, twelve_47_pm, two_00_pm, three_45_pm,
    seven_00_pm, nine_45_pm};
    
    int arrivals[8] = {ten_16_am, eleven_52_am, one_31_pm, three_00_pm, four_08_pm, five_55_pm,
    nine_20_pm, eleven_58_pm};
    
    int nearest_dep_idx = 0;
    int min_time = 1440; 

    for (int i = 0; i < 8; i++) {

        int temp = abs(departures[i] - time_in_minutes);
        if (temp < min_time) {
            // printf("TEMP: %d\n", temp);
            min_time = temp;
            nearest_dep_idx = i;
        }
        
    
    }
    // printf("MINTIME: %d\n", min_time);
    // printf("Nearest DEP IDX: %d\n", nearest_dep_idx);
    printf("Closest departure time is %2.2d:%2.2d, arriving at %2.2d:%2.2d.\n", departures[nearest_dep_idx] / 60, departures[nearest_dep_idx] % 60, arrivals[nearest_dep_idx] / 60, arrivals[nearest_dep_idx] % 60);
    return 0;
}

