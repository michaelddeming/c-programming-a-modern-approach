
#include <stdio.h>

int main(void) {

    char original_phrase[80];
    char encrypted_phrase[80];

    int shift = 0;

    printf("Enter message to be encrypted: ");

    char c;
    int i = 0;
    while ((c = getchar()) != '\n') {

        if (i > 80) {
            printf("Error, message too long.\n");
            return 1;
        }
        original_phrase[i] = c;
        i++;
    }

    
    printf("Enter shift amount (1-25): ");
    while (shift < 1 || shift > 25) {
        scanf("%d", &shift);
    }
    

    for (int j = 0; j < i; j++) {
        
        char encrypted_c;
        // uppercase
        if (65 <= original_phrase[j] && original_phrase[j] <= 90) 
            encrypted_c = ((original_phrase[j] - 'A') + shift) % 26 + 'A';
        // lowercase  
        else if (97 <= original_phrase[j] && original_phrase[j] <= 122)
            encrypted_c = ((original_phrase[j] - 'a') + shift) % 26 + 'a';
        else encrypted_c = original_phrase[j];

        encrypted_phrase[j] = encrypted_c;

    }

    printf("Encrypted message: ");
    for (int j = 0; j < i; j++) {
        printf("%c", encrypted_phrase[j]);
    }
    printf("\n");
    return 0;
}