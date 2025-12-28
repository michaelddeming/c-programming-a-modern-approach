
#include <stdio.h>
#include <ctype.h>

int abs(int a){
    return (a < 0) ? -(a) : a;
}

int main(void) {
    int hours, minutes;
    char first, second;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hours, &minutes);


    if ((hours < 0 || hours > 12) || (minutes < 0 || minutes > 59)) {
        printf("Invalid 12-hour time.\n");
        return 1;
    }
    
    scanf(" %c", &first);

    if (first == 'a' || first == 'A') {
        if (hours == 12) {
            hours = 0;
        }
    }
    else if (first == 'p' || first == 'P') {
        if (hours != 12) {
            hours += 12;
        }
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

    int closest_dep = eight_00_am;
    int smallest_diff = abs(eight_00_am - time_in_minutes);

    

    // 9:43 AM
    if (abs(nine_43_am - time_in_minutes) < smallest_diff)  {
        closest_dep = nine_43_am;
        smallest_diff = abs(nine_43_am - time_in_minutes);

    }
    // 11:19 AM
    if (abs(eleven_19_am - time_in_minutes) < smallest_diff)  {
        closest_dep = eleven_19_am;
        smallest_diff = abs(eleven_19_am - time_in_minutes);

    }
    // 12:47 AM
    if (abs(twelve_47_pm - time_in_minutes) < smallest_diff)  {
        closest_dep = twelve_47_pm;
        smallest_diff = abs(twelve_47_pm - time_in_minutes);

    }
    // 2:00 PM
    if (abs(two_00_pm - time_in_minutes) < smallest_diff)  {
        closest_dep = two_00_pm;
        smallest_diff = abs(two_00_pm - time_in_minutes);

    }
    // 3:45 PM
    if (abs(three_45_pm - time_in_minutes) < smallest_diff)  {
        closest_dep = three_45_pm;
        smallest_diff = abs(three_45_pm - time_in_minutes);

    }
    // 7:00 PM
    if (abs(seven_00_pm - time_in_minutes) < smallest_diff)  {
        closest_dep = seven_00_pm;
        smallest_diff = abs(seven_00_pm - time_in_minutes);

    }
    // 9:45 PM
    if  (abs(nine_45_pm - time_in_minutes) < smallest_diff)  {
        closest_dep = nine_45_pm;
        smallest_diff = abs(nine_45_pm - time_in_minutes);
      
    }
    // Print the closest departure
    if (closest_dep == eight_00_am)
    printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if (closest_dep == nine_43_am)
    printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if (closest_dep == eleven_19_am)
    printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if (closest_dep == twelve_47_pm)
    printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    else if (closest_dep == two_00_pm)
    printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if (closest_dep == three_45_pm)
    printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if (closest_dep == seven_00_pm)
    printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    else
    printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    return 0;
}

