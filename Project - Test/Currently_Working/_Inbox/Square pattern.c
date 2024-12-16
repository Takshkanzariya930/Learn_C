#include <stdio.h>

void main()
{
	int i,j,n;

	printf("Enter dimention of square : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("*");
	}
	printf("\n");

	for(i=0;i<n-2;i++)
	{
		printf("*");

		for(j=0;j<n-2;j++)
		{
			printf(" ");
		}

		printf("*\n");
	}

	for(i=0;i<n;i++)
	{
		printf("*");
	}

}