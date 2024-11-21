#include <stdio.h>

int main()
{
	char str[50] = "hello world";

	printf("|%30s|\n",str);
	scanf("%[^\n]",str);
	printf("|%30s|",str);
}