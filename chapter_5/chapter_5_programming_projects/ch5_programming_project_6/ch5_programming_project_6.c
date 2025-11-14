
#include <stdio.h>

int main(void) {

    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total, check_val;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    printf("Enter the (single) check digit: ");
    scanf("%1d", &check_val);
    
   



    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    int check_digit_compute = 9 - ((total - 1) % 10);

    if (check_digit_compute != check_val) 
        printf("INVAILD\n");
    else 
        printf("VALID\n");
    return 0;

}