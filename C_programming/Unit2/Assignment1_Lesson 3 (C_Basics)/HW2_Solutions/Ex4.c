#include "stdio.h"
void main (){
    double a ;
    printf("Enter a number : ");
    scanf("%lf",&a);

    if(a>0){
        printf("%lf is positive",a);
    }
    else{
        a==0 ? printf("You  enteredd zero"): printf("%lf is negative",a);
    }

}