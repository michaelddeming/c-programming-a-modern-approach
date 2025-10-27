

#include <stdio.h>


int main(void) {

    int r = 10;
    float pi = 3.14f;

    float vol = (4.0f/3.0f) * pi * (r * r * r);

    printf("Sphere Volume (Radius=10): %0.2f\n", vol);
    return 0;

}