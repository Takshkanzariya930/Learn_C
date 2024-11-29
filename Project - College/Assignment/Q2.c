#include <stdio.h>

int main()
{
	int arr[100],i,j,n,temp;

	printf("Enter number of elements you need to enter : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter [%d] element : ",i+1);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("\nAscending order:\n");

	for(i=0;i<n;i++)
	{
		printf("[%d] element : %d\n",i+1,arr[i]);
	}

	printf("\nDescending order:\n");

	for(i=(n-1);i>=0;i--)
	{
		printf("[%d] element : %d\n",i+1,arr[i]);
	}
}