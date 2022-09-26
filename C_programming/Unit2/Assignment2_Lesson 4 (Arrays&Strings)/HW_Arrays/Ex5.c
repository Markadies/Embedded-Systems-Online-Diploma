#include "stdio.h"
#include "string.h"

void main(){

	int i,n,element;
	int a[30];
	printf("Enter number of elements : ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &n);
	printf("Enter the %d elements : \n ",n);

	for (i=0 ;i<n;i++){
		fflush(stdout);fflush(stdin);
		scanf("%d", &a[i]);

	}

	printf("Enter the element to be searched :");
	fflush(stdout);fflush(stdin);
	scanf("%d", &element);




	for (i=0; i<n ;i++){
		if(a[i]==element){
			printf("Number found at location %d",i+1);
			break;
		}

	}
}
