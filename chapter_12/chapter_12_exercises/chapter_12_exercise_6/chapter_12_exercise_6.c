

int sum_array (const int a[], int n) {

    int sum = 0, *p = a, *q = a + n;

    for (;p < q; p++) {
        sum += *p;
    }
    return sum;

}