

#include <stdio.h>

int main(void) {

    int start, middle, end;

    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d", &start, &middle, &end);
    printf("You entered %d.%d.%d\n", start, middle, end);
    return 0;
    // probably should take the len() of the start, middle, and end to satisfy condition of phone number, but we haven't gotten there in the book!

}