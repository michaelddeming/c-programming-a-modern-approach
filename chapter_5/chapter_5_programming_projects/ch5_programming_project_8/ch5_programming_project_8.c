
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

    
    // 8:00 AM
    if (abs(eight_00_am - time_in_minutes) < abs(nine_43_am - time_in_minutes))  {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    }
    // 9:43 AM
    else if (abs(nine_43_am - time_in_minutes) < abs(eleven_19_am - time_in_minutes))  {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    }
    // 11:19 AM
    else if (abs(eleven_19_am - time_in_minutes) < abs(twelve_47_pm - time_in_minutes))  {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    }
    // 12:47 AM
    else if (abs(twelve_47_pm - time_in_minutes) < abs(two_00_pm - time_in_minutes))  {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    }
    // 2:00 PM
    else if (abs(two_00_pm - time_in_minutes) < abs(three_45_pm - time_in_minutes))  {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    }
    // 3:45 PM
    else if (abs(three_45_pm - time_in_minutes) < abs(seven_00_pm - time_in_minutes))  {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    }
    // 7:00 PM
    else if (abs(seven_00_pm - time_in_minutes) < abs(nine_45_pm - time_in_minutes))  {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    }
    // 9:45 PM
    else  {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }
    return 0;
}

