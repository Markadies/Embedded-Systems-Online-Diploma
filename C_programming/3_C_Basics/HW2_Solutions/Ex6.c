#include "stdio.h"
void main (){

    unsigned int i ;
    int j,sum=0;
     printf("Enter a positive integer : ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&i);

    for(j=0;j<=i;j++){
        sum+=j ;
    } 
     printf("Sum = %d",sum);
    
}