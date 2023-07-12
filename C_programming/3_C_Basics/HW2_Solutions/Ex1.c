#include "stdio.h"
void main (){

//Ex1 HW2
    int x;
    printf("Enter an integers : ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&x);
    if(x%2==0){
        printf("the number you entered is Even");
    }
    else {
        printf("the number you entered is Odd");
    }


}