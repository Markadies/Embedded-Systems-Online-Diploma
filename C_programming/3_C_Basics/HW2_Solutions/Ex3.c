#include "stdio.h"
void main(){
    float a,b,c;
    printf("Enter three numbers : ");
    fflush(stdout);fflush(stdin);
    scanf("%f %f %f",&a,&b,&c);
    if(a>b){
        printf("Largest number = %f",a>c ? a:c);
    }
    else if(b>a){
        printf("Largest number = %f",b>c ? b:c);
    }
}