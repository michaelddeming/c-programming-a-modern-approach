
#include <stdio.h>

int main(void) {
    int first, second, third, fourth, pair_1_max, pair_1_min, pair_2_max, pair_2_min;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);

    if (first < second) {
        pair_1_max = second;
        pair_1_min = first;
    }
    else {
        pair_1_max = first;
        pair_1_min = second;
    }
    if (third < fourth){
        pair_2_max = fourth;
        pair_2_min = third;
    }
    else {
        pair_2_max = third;
        pair_2_min = fourth;
    }
    int largest, smallest;
    largest = pair_1_max < pair_2_max ? pair_2_max : pair_1_max;
    smallest = pair_1_min < pair_2_min ? pair_1_min : pair_2_min;


    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
    return 0;
}