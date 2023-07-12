/*
 * main.c
 *
 *  Created on: Sep 26, 2022
 *      Author: Kadees
 */

#include "stdio.h"
#include "string.h"

int Factorial (int num){
	
	if(num>1){
		return num*Factorial(num-1);
	}
	else if (num==0){
		return 1;
	} 

}



void main(){

	int i,Fac;
	printf("Enter a positive integer : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&i);

	Fac = Factorial(i);
	printf("Factorial of %d = %d",i,Fac);
}

