
#include <stdio.h>

unsigned int num_digits(unsigned int num) {
    
    int res = 0;
    while (num > 0) {

        res += 1;
        num /= 10;
    }
    printf("Number of digits: %d\n", res);
    return 0;
}


int main(void) {

    return num_digits(2016);

}

