#include "stdio.h"
double squareRoot(int num);
int main ()
{
	printf("%f\n",squareRoot(4));
	printf("%f",squareRoot(10));
}
double squareRoot(int num)
{
	float i=0;
	float step = (num/2.0)/200.0;
	while(i < ((float)num/2))
	{
		if(i*i >= num)
			break;
		i+=step;
	}
	return (i);

}