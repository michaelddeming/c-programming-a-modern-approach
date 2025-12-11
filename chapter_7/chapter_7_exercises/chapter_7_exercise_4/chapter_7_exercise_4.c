
/*

char c;

a) i += c; (i has type int) -> legal the ASCII value of c will be added to int i.
b) c = 2 * c - 1 -> legal more arithmetic on c which is promoted to int during the expression, then is converted back to char when updating variable c. CAREFUL overflow may occur if the new value of char c is not within the range -128 to 127 for signed char)
c) putchar(c) -> legal, quick print of the character associated with the integer value.
d) printf(c) -> illegal, we need a format specifier and proper argument notation.


*/