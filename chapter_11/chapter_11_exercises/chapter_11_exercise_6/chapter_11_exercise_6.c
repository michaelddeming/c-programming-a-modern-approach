
#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest) {

    *largest = a[0];
    for (int i = 1; i < n; i++) {
        if (*largest <= a[i]) {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if (*largest > a[i] && a[i] < *second_largest) {
            *second_largest = a[i];
        }
        else continue;
    }   

}

int main(void) {

    int largest, second_largest;
    int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = (sizeof(nums) / sizeof(nums[0]));
    find_two_largest(nums, n, &largest, &second_largest);
    printf("Largest: %d, Second Largest: %d\n", largest, second_largest);
}