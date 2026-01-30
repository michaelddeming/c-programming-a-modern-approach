
#include <stdio.h>


double triangle_area(double base, double height) {// first error is missing type declaration on 'height' variable 

    double product = base * height; //'product' needs declared locally in the function
    printf("%lf\n", product / 2);
    return product / 2;

}

int main(void) {
 
    double res = triangle_area(2, 2);
    return 0;
}