#include <stdio.h>

//write a program in C to print all the alphabets using a pointer. Go to the editor

void main(){
    
    char alpha[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *ptr = alpha;

    printf("The Alphabets are :");
    for (int i=0;i<sizeof(alpha)/sizeof(alpha[0]);i++){
        printf("%c  ",*ptr);
        ptr++;
    }

}