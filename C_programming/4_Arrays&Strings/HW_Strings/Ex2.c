#include "stdio.h"
#include "string.h"

void main(){
	char str[100],length=0;
	int i ;
	printf("Enter a String : ");
	fflush(stdout);fflush(stdin);
	gets(str);

	printf("Length of String : ");
	fflush(stdout);fflush(stdin);

	for(i=0; i< sizeof(str)&& str[i]!=0; i++){
			length++;
	}
	printf("%d",length);
}
