#include "stdio.h"
void main (){

    unsigned int i ;
    int j,factorial=1
     printf("Enter a positive integer : ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&i);

    if (i<0){
        printf("ERROR. Factorial doesn't exist.");
    }
    else if (i==0){
        printf("Factorial = 0");
    }
    else{
        for(j=1;j<=i;j++){
        factorial*=j ;
    } 
        printf("Factorial = %d",factorial);
    }

    
}