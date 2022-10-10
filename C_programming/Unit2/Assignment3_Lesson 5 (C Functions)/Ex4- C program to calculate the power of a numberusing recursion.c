 
#include <stdio.h>

int Power(int base , int power) {


	if (power == 0) {
		return 1 ;
	}
	else if (power > 0){
		return base*Power(base,power-1);
	}
	else
		return -1 ;
}


void main() {
	int base,power;
	printf("Enter Base Number :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&base);
	printf("Enter Power Number (positive integer) :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&power);

	printf("%d^%d = %d",base,power,Power(base,power));

}


