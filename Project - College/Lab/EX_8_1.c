#include <stdio.h>

int main()
{
	int n,i;

	printf("Enter no. of elements you want to store: ");
	scanf("%d",&n);

	int num[n];
	
	printf("\n");

	for(i=0;i<n;i++)
	{
		printf("Enter [%d] element: ",i+1);
		scanf("%d",&num[i]);
	}

	printf("\n");

	for(i=(n-1);i>=0;i--)
	{
		printf("[%d] element is %d",i+1,num[i]);
		printf("\n");
	}
}