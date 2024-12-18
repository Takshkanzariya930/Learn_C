#include <stdio.h>

void main()
{
	int i,j,n;

	printf("Enter no of lines you want to print : ");
	scanf("%d",&n);

	if(n%2==0)
	{
		for(i=1;i<=n/2;i++)
		{
			for(j=(n/2-i);j>=1;j--)
			{
				printf("-");
			}

			for(j=1;j<=(2*i);j++)
			{
				printf("*");
			}

			printf("\n");
		}
	}

	else
	{
		for(i=0;i<=n/2;i++)
		{
			for(j=(n/2-i);j>=1;j--)
			{
				printf("-");
			}

			for(j=1;j<=(2*i+1);j++)
			{
				printf("*");
			}
			
			printf("\n");
		}
	}
	
}