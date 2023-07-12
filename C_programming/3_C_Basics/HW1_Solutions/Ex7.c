#include <stdio.h>

int main()
{
	float a,b;
	printf("Enter Value of a :");
	scanf("%f",&a);
	printf("Enter Value of b :");
	scanf("%f",&b);

	a=a*b;
	b=a/b;
	a=a/b;

	printf("After Swapping, value of a = %f\n",a);
	printf("After Swapping, value of b = %f\n",b);

}

