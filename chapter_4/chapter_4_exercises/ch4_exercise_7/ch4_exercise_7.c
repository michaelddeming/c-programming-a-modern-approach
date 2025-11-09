// Subtraction and modulo operations are not associative, so changing the order alters the result.

// 9 - ((total - 1)%10) != 10 - (total%10)

// The parentheses matter: subtracting 1 first shifts the total before taking the remainder. Skipping that step produces an incorrect check digit.