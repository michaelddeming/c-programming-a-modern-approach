

double inner_product(const double *a, const double *b, int n) {

    const double *p = a, *q = b, *end_a = a + n;
    double res = 0;


    for ( ; p < end_a ; p++) {
        res += ((*p) * (*q++));
    }
    return res;
}