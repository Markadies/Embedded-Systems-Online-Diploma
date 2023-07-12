#include "stdio.h"
void main (){
    char c ;
    char i ,I ,j='z' ,J='Z' ; 
    printf("Enter a Character : ");
    fflush(stdout);fflush(stdin);
    scanf("%c",&c);
    
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
      { printf("%c is an alphabet",c); } 
    
    else {
        printf("%c is not an alphabet",c);
    }


}