#include "stdio.h"
//C program to Add two complex numbers by passing structure to a function

struct complex 
{
    float real;
    float img;
};
struct complex Add(struct complex num1,struct complex num2)
{
    struct complex result;

    //adding 2 complex numbers
    result.real = num1.real + num2.real;
    result.img = num1.img + num2.img;

    return result;
}

void main ()
{
    struct complex num1, num2,result;
    //getting the 2 numbers from the user
    
    printf("For first complex number\n");
    printf("Enter real and imaginary respectively (ex:2.3 4.5): ");
    scanf("%f %f", &num1.real, &num1.img);

    printf("\nFor second complex number\n");
    printf("Enter real and imaginary respectively (ex:2.3 4.5): ");
    scanf("%f %f", &num2.real, &num2.img);

    result = Add(num1,num2);
    printf("Sum = %.1f + %.1f i",result.real,result.img);
}