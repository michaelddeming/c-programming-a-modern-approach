

#include <stdio.h>

int selection_sort(int nums[], int arrlen) {

    if (arrlen == 0) 
        return 0;
    int max = nums[0], max_idx = 0;

    for (int i = 1; i < arrlen; i++) {
        if (max < nums[i]) {
            max = nums[i];
            max_idx = i;
        }
    }

    int temp = nums[arrlen - 1]; // get the last value
    nums[arrlen - 1] = max; // save the max as the last value
    nums[max_idx] = temp; // write the prev last into the gap

    selection_sort(nums, arrlen - 1);

}

int main(void) {

    int arrlen = 10;
    printf("Enter a series of 10 integers: ");

    int nums[10] = {0};

    for (int i = 0; i < arrlen; i++) {

        scanf("%d", &nums[i]);
    }

    selection_sort(nums, arrlen);

    for (int i = 0; i < arrlen; i++) {

        printf("%d ", nums[i]);
    }
    printf("\n");
   
    return 0;

}