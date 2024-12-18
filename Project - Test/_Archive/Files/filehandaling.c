#include <stdio.h>

void main()
{
	FILE *fileptr;
	char str[50];

	fileptr = fopen("text.txt","r");

	fgets(str,50,fileptr);
	printf("Text is : %s",str);

	fgets(str,50,fileptr);
	printf("Text is : %s",str);
}