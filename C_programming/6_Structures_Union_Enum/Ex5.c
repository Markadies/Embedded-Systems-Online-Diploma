#include <math.h>
#include <stdio.h>
#define PI 3.142
#define AREA PI*r*r

// C program to find the area of the circle passing arguments to macros
float r;
double findArea(int r) { return PI * r * r; }

void main()
{

    printf("Enter the raduis: ");
    scanf("%f",&r);
	printf("Area is %f", AREA);
}
