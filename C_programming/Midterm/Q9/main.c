#include "stdio.h"
#include "string.h"


void reverse_words_in_string(char text[])
{
	int len =strlen(text);
	char ch[15];
	int i=0;
	int a=0;
	int count=0;
	for(;;i++,count++)
	{
		if((text[i]==' ') || (text[i]=='\0'))
		{
			a=i;
			for(;count--;a--)
			{
				ch[len-a]=text[i-(count+1)];
			}
			count=0;
		}
		if(text[i]=='\0')
		{

			strcpy(text,ch);
			break;
		}
	}
}

int main()
{
	char text[]="mohamed sultan";
	reverse_words_in_string(text);
	printf("%s",text);

	return 0;
}

