#include "stdio.h"
void main()
{
//Ex1 HW2
    char c ;
    printf("Enter an Alphabet :");
    fflush(stdout);fflush (stdin);
    scanf("%c",&c);
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        printf("%c ia a vowel",c);
    }
    else{
        printf("%c ia a consonant",c);
    }
}

