#include <stdio.h>

int main()
{
	int count=0,i=0;
	char str[100],c;

	printf("Enter string : ");
	scanf("%[^\n]",str);

	getchar();

	printf("Enter Character to count : ");
	scanf("%c",&c);

	while(str[i] != '\0')
	{
		if(str[i] == c)
			count++;

		i++;
	}

	printf("\nCharacter '%c' occures %d times in given string.",c,count);

}