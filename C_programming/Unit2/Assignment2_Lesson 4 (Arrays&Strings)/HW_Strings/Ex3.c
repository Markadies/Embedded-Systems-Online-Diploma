#include "stdio.h"
#include "string.h"

void main(){
	char str[100],temp;
	int i,j ;
	printf("Enter the String : ");
	fflush(stdout);fflush(stdin);
	gets(str);



	for(i=0,j=(strlen(str)-1); i<j;i++,j--){
		temp = str[i];
		str[i]=str[j];
		str[j]=temp ;

	}

	printf("Reverse string is : %s ",str);

}


