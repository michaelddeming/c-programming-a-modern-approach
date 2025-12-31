


#include <stdio.h>
#include <stdbool.h>

int main(void) {
    

    bool weekend[] = {1, 0, 0, 0, 0, 0, 1};

    int len = sizeof(weekend) / sizeof(weekend[0]);

    for (int i = 0; i < len; i++){
        printf("Index %d: %d\n", i, weekend[i]);    
    }

}