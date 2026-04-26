

void store_zeros(int a[], int n) {

    int *p = a, *end = a + n;
    for ( ; p < end ; p++) {
        *p = 0;
    }
}