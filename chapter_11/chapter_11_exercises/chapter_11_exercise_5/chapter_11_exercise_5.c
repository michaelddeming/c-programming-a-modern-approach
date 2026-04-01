
#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec) {


    int left_over = total_sec % (3600);
    *hr = (total_sec - left_over) / 3600;
    *sec = left_over % 60;
    *min = (left_over - *sec) / 60; 

}

int main(void) {

    long total_sec = 4572;

    int hr, min, sec;
    
    split_time(total_sec, &hr, &min, &sec);
    printf("Hours: %d, Minutes: %d, Seconds: %d\n", hr, min, sec);

}