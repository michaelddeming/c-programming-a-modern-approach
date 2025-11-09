
/* C99

a) 8 % 5 = 3

b) -8 % 5 = -3

    a / b
    -8 / 5 = -1
    ---
    -8 = (-1) * (5) + (a%b)
    -3 = (a%b)

c) 8 % -5 = 3

    a / b
    8 / -5 = -1
    ---
    8 = (-1) * (-5) + (a%b)
    3 = (a%b)

d) -8 % -5 = -3

    a / b
    -8 / -5 = 1
    ---
    -8 = (1) * (-5) + (a%b)
    -3 = (a%b)

HINT: In C99 the sign of the fist value is the sign of the remainder.
*/