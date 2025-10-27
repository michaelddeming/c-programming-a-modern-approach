#include <stdio.h>


int main(void) {

    int radius;
    float pi = 3.14f;

    printf("Enter Sphere Radius: ");
    scanf("%d", &radius);    
    
    float vol = (4.0f/3.0f) * pi * (radius * radius * radius);

    printf("Sphere Volume (Radius=%d): %0.2f\n", radius, vol);
    return 0;

}