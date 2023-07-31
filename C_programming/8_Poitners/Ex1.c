#include <stdio.h>

//write a program in C to demonstrate how to handle the pointers in the program
void main(){

    int m = 29;
    int* ab ;
    printf("Address of m : 0x%x\nValue of m : %d\n",&m,m);
    
    ab = &m;
    printf("\nNow ab is assigned with the address of m.\n");
    printf("Address of pointer ab : 0x%x\nContent of pointer ab : %d\n",ab,*ab);

    m = 34;
    printf("\nthe value of m assigned to 34 now.\n");
    printf("Address of pointer ab : 0x%x\nContent of pointer ab : %d\n",ab,*ab);

    printf("\nThe pointer variable ab is assigned with the value 7 now.\n");
    *ab = 7;
    printf("Address of m : 0x%x\nValue of m : %d\n",&m,m);


}