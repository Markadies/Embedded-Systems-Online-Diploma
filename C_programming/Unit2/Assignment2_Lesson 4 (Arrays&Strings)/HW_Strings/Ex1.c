#include "stdio.h"
#include "string.h"

void main(){
	char str[100],character,sum=0;
	int i ;
	printf("Enter a String : ");
	fflush(stdout);fflush(stdin);
	gets(str);

	printf("Enter a character to find frequency : ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&character);

	for(i=0; i< strlen(str); i++){
		if(str[i]==character)
			sum++;
	}
	printf("Frequency of %c = %d",character,sum);
}