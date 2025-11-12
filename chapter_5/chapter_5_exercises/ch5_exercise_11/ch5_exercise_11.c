#include <stdio.h>

int main(void) {

    int code = 770;
    switch (code) {
        case 229: case 912: printf("Albany\n");
        break;
        case 404: case 470: case 678: case 770: printf("Atlanta\n");
        break;
        case 478: printf("Macon\n");
        break;
        case 706: case 762: printf("Columbus\n");
        break;
        default: printf("Area code not recognized.");
    }
}
