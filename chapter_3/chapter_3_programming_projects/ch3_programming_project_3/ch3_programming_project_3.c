
#include <stdio.h>

int main(void) {

    // GS1 Prefix (978 or 979)-group identifier (0 or 1 for english-speaking)-publisher code-item number-check digit
    int gs1_prefix, group_id, pub_code, item_number, check_digit;
    printf("Enter ISBN: ");
    scanf(" %d - %d - %d - %d - %d", &gs1_prefix, &group_id, &pub_code, &item_number, &check_digit);
    printf("GS1 prefix: %d\n", gs1_prefix);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", pub_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);
    return 0;


    
}