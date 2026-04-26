
/*

a) False, trying to insert a char* when putchar requires a char
b) True, p is a pointer to address in the 0 index, start of the string, deref. p will provide "a"
c) True
d) False, puts expects a char * as input but we are giving a char (int) by deref. p

*/

#include <stdio.h>

int main(void) {

    char *p = "abc";
    // putchar(p);
    // putchar(*p);
    // puts(p);
    // puts(*p)
}   