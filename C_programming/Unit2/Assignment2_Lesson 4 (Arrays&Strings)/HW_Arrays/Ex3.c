#include "stdio.h"
#include "string.h"

void main(){

	int i,j ;
	int row,coloumn;
	printf("Enter rows and columns of matrix : ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d", &row,&coloumn);
	int a[row][coloumn];
	printf("Enter elements of matrix :\n ");

	for (i=0 ;i<row;i++){
		for (j=0 ;j< coloumn;j++){
			printf("Enter element a[%d][%d] : ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%d", &a[i][j]);

		}
	}
	printf("\nEntered Matrix : \n");
	for (i=0 ;i<row;i++){
		printf("\n");
		for (j=0 ;j< coloumn;j++){
			printf("%d\t",a[i][j]);
		}
	}

	printf("\nTranspose of  Matrix : \n");
	for (i=0 ;i<coloumn;i++){
		printf("\n");
		for (j=0 ;j<row;j++){
			printf("%d\t",a[j][i]);
		}
	}
}
