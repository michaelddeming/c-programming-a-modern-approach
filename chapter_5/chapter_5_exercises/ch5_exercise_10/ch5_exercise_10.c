#include <stdio.h>

int main(void) {

    int i = 1;
    switch (i % 3) {
        case 0: printf("zero");
        case 1: printf("one");
        case 2: printf("two");
    }
}

// output -> "onetwo" because 1 % 3 = 1. But there is no break statements so execution falls through to the next cases.