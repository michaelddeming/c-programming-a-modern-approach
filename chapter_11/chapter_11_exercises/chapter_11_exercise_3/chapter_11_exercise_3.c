/*

    1. sum is a pointer, we need to use *sum to assign value to whatever sum is pointing to
    2. sum is a pointer, we need to use *sum += when adding values to the value type double sum pointer is pointing to
    3. avg is a pointer, we need to use *avg to assign the expression (sum / n) as the value that avg is pointing to.
        - The expression (sum / n) needs to use (*sum / n) to use the value the pointer sum is pointing to within the expression.

*/