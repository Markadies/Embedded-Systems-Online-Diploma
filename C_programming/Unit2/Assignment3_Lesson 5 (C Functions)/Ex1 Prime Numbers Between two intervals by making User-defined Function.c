/*
 * main.c
 *
 *  Created on: Sep 26, 2022
 *      Author: Kadees
 */

#include "stdio.h"
#include "string.h"

int CheckPrime (int num){
	int flag=0,i ;
	for(i=2;i<=num/2;i++){
		if(num%i ==0 ){
			flag = 1;
			break;
		}
	}
	return flag;
}



void main(){
	int begin , end ,flag ,i;
	printf("Enter two numbers (intervals) :");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&begin ,&end);
	printf("Prime numbers between %d and %d are : ",begin,end);
	for(i=begin+1;i<end;i++){
		flag=CheckPrime(i);
		if(flag==0){
			printf("%d ",i);
		}
	}

