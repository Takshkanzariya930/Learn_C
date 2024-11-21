#include <stdio.h>

int main()
{
	int i,j,n,c;

	printf("Enter no. of rows: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		c = 64 + i;
		for(j=n;j>=i;j--)
		{
			printf("%c",c);
		}
		printf("\n");
	}
}