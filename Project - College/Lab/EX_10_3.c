#include <stdio.h>
#include <string.h>

int main()
{
	char str[100],rstr[100];
	int i,n;

	printf("Enter string to check palindrome: ");
	scanf("%[^\n]",str);

	n = strlen(str);

	for(i=0;i<n;i++)
	{
		rstr[(n-i)-1] = str[i];
	}

	rstr[n] = '\0';

	if(strcmp(str,rstr) == 0)
	{
		printf("\nString is Palindrome.");
	}

	else
	{
		printf("\nString is NOT Palindrome.");
	}
}