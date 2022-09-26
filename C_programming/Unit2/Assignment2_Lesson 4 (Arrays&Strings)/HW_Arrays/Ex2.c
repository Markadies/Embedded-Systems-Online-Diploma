 
#include "stdio.h"
#include "string.h"

void main(){
	int n ,i;
	float sum=0.0 ;
	float Arr[100];
	printf("Enter the number of Data : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);

	for (i=0 ; i<n ; i++){
		printf("Enter a number : ");
		fflush(stdout);fflush(stdin);
		scanf("%f",&Arr[i]);
		sum += Arr[i] ;
	}

	printf("Average = %f",sum/n);


}

