
#include <stdio.h>

void revParagraph() {
	char x;
	scanf("%c", &x);

	if (x != '\n') {
		revParagraph();
		printf("%c", x);
	}
}


void main() {
	printf("Enter the sentence to make reverse : ");
	revParagraph();
	printf("\n");
}


