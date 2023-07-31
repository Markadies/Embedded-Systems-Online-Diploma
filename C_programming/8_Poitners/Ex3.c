#include <stdio.h>
#include "string.h"
//write a program in C to print a string in reverse using a pointer

void main(){

    char in[20] ;
    printf("Input a string : ");
    scanf("%s",in);
    printf("%d",strlen(in));
    unsigned char *ptr ; //pointer
    ptr = &in[( strlen(in)/sizeof(in[0]) )-1];

    printf("Its reverse : ");
    for (int i=0;i<strlen(in)/sizeof(in[0]);i++){
        printf("%c",*ptr);
        ptr--;
    }
}