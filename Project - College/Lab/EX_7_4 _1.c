#include <stdio.h>

int main()
{
	int i,j,n,c=1;

	printf("Enter no. of rows: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		c = i;
		for(j=n;j>=i;j--)
		{
			printf("%d",c);
			c++;
		}
		printf("\n");
	}
}