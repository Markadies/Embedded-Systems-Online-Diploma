#include <stdio.h>

int main()
{
	float x,y,z=0.0;
	printf("Enter Value of a :");
	scanf("%f",&x);
	printf("Enter Value of b :");
	scanf("%f",&y);
	z=x;
	x=y;
	y=z;
	printf("After Swapping, value of a = %f\n",x);
	printf("After Swapping, value of b = %f\n",y);

}


