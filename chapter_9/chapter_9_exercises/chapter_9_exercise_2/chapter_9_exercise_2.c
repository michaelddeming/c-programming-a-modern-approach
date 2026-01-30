
#include <stdio.h>

int check(int x, int y, int n) {
    
    int cap = n - 1;
    
    if (0 <= x && 0 <= y && x <= cap && y <= cap) return 1;
    else return 0;
}


int main(void) {

    int x = 2, y = 3, n = 20; // make x or y >20 for fail

    printf("%d\n", check(x, y, n));

}