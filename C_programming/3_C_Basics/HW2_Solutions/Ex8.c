#include "stdio.h"
void main (int argc, char **argv){
    char choice;
    float op1,op2 ; 
    printf("Enter two operands :");
    fflush(stdout);fflush(stdin);
    scanf("%f %f",&op1,&op2);
    printf("Enter Operator either + or - or * or /");
    fflush(stdout);fflush(stdin);
    scanf("%c",&choice);

    switch(choice){

    case '+': {
        printf("%f + %f = %f",op1,op2,op1+op2);
    }
    break;
    
    case '-': {
        printf("%f - %f = %f",op1,op2,op1-op2);
    }
    break;

    case '*': {
        printf("%f * %f = %f",op1,op2,op1*op2);
    }
    break;
    case '/': {
        printf("%f / %f = %f",op1,op2,op1/op2);
    }
    break;
    
    default :{
        printf("Wrong choice ");
        break;
    }
    }
}
