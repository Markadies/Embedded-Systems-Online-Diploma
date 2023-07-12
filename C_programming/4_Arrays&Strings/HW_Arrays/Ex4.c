#include "stdio.h"
#include "string.h"

void main(){

	int i,n,element,location ;
	int a[30];
	printf("Enter number of elements : ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &n);
	printf("Enter the %d elements :  ",n);

	for (i=0 ;i<n;i++){
		fflush(stdout);fflush(stdin);
		scanf("%d", &a[i]);

	}

	printf("Enter the element to be inserted :");
	fflush(stdout);fflush(stdin);
	scanf("%d", &element);

	printf("Enter the location : ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &location);


	for (i=n; i>=location;i--){
		a[i]=a[i-1];
	}
	n++;
	a[location-1]= element;

	for (i=0 ;i<n;i++){
		printf("%d  ",a[i]);
	}
}
