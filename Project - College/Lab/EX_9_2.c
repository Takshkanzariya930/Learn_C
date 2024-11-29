#include <stdio.h>

int main()
{
	int n=0;
	char st[100];

	printf("Enter string you want to find length of : ");
	scanf("%[^\n]",st);

	while(st[n] != '\0')
	{
		n++;
	}

	printf("Length of the given string \"%s\" is %d",st,n);
}