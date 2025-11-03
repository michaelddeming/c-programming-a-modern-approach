
/*
a) "%d" vs. " %d" 
   -> Equivalent. scanf ignores leading whitespace before numeric input, 
      so these behave the same.

b) "%d-%d-%d" vs. "%d -%d -%d" 
   -> Not equivalent. The second allows optional whitespace where the spaces appear, 
      while the first requires the dashes to appear immediately.

c) "%f" vs. "%f " 
   -> Not equivalent. "%f " will wait for a non-whitespace character after reading the float, 
      potentially causing scanf to block for more input.

d) "%f,%f" vs. "%f, %f" 
   -> Equivalent. "%f, %f" allows whitespace after the comma, but in "%f,%f" scanf already skips
      leading whitespace before reading the next %f, so both behave the same.
*/

#include <stdio.h>

int main(void){
    
    float i, j;
    printf("Enter Value: ");
    scanf("%f,%f", &i, &j);
    printf("%.2f,%.2f", i, j);
    return 0;
}   