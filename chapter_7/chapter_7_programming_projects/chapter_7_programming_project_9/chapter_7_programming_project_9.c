
#include <stdio.h>

int main(void) {

    int hours, minutes;
    char period;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hours, &minutes, &period);

     if ((hours < 1 || hours > 12) || (minutes < 0 || minutes > 59)) {
        printf("Invalid 12-hour time.\n");
        return 1;
    }

    if (first == 'a' || first == 'A'){
        if (hours == 12){
            hours = 0;
        }

    }
    else if (first == 'p' || first == 'P') {
        if (hours != 12) {
            hours += 12;
        }
    }
    
    printf("Equivalent 24-hour time: %2d:%2d\n", hours, minutes);
    return 0;

}