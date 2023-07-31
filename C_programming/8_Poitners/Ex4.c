#include <stdio.h>
//write a program in C to print the elements of an array in reverse order

void main(){

    int in[15],no ;
    unsigned int* ptr; 

    printf("Input the number of elements to store in the array (max 15) : ");
    scanf("%d",&no);

    printf("Input %d number of elements in the array : \n",no);

    for(int i =0; i< no ; i++){
        printf("element - %d : ",i+1);
        scanf("%d",&in[i]);
    }

    ptr = &in[no-1];

    printf("\nthe elements of array in reverse order are : \n");
    for (int i=0 ; i<no ; i++){
        printf("element -  %d : %d\n", no-i-1, *ptr);
        ptr--;
    }
}