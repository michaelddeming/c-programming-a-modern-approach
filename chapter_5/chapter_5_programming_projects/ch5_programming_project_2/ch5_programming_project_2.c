
#include <stdio.h>

int main(void) {

    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    // error handling
    if ((hour > 24 || hour < 1) || (minute < 0 || minute > 59)){
        printf("Error, invalid time: %d:%d\n", hour, minute);
    }
    else {
        if (hour < 12 || hour == 24) {
            if (hour == 24){
                hour -= 12;
            }
            printf("Equivalent 12-hour time: %d:%.2d AM\n", hour, minute);
        }
        else if (12 <= hour && hour < 24) {
            if (hour != 12) {
                hour -= 12;
            }
            printf("Equivalent 12-hour time: %d:%.2d PM\n", hour, minute);
        }
  
    }



    

}