#include "stdio.h"
#include "string.h"

void main(){
	float matrix_1[2][2];
	float matrix_2[2][2];
	int i,j;

	printf("Enter the elements of 1st matrix \n");

	for(i=0 ; i<2 ;i++){
		for(j=0 ; j<2 ;j++){
			printf("Enter a[%d][%d] : ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&matrix_1[i][j]);
			fflush(stdout);fflush(stdin);
		}
	}
	printf("Enter the elements of 2nd matrix \n");

	for(i=0 ; i<2 ;i++){
		for(j=0 ; j<2 ;j++){
			printf("Enter b[%d][%d] : ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&matrix_2[i][j]);
		}
	}
	printf("\n Sum of matrix : \n");
	for(i=0;i<2;i++){
		printf("\n");
		for(j = 0; j<2;j++){
			printf("%2.2f \t",(matrix_1[i][j])+(matrix_2[i][j]));

		}
	}

}
