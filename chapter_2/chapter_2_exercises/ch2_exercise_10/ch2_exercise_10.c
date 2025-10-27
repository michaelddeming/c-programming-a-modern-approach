/*
In the dweight. c program (Section 2.4), which spaces are essential?
*/

#include <stdio.h>
int main(void){int height,length,width,volume,weight;height=8;length=12;width=10;volume=height*length*width;printf("Diemnsions: %dx%dx%d\n", length, width, height);printf("Volume (cubic inches): %d\n", volume);printf("Dimensional weight (pounds): %d\n", ((volume + 165) / 166));return 0;}

// Spaces that are essential are within String Literals, after a variable declaration (int, float, etc., directive need their own line.