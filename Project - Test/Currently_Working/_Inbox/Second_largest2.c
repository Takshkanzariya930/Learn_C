#include <stdio.h>

int main()
{
	int i,j,n,temp;

	printf("Enter number of elements you want to store : ");
	scanf("%d",&n);

	int arr[n];

	for(i=0;i<n;i++)
	{
		printf("Enter [%d] element : ",i+1);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-1-i);j++)
		{
			if(arr[j+1]>arr[j])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("\n%d is largest.",arr[0]);
	printf("\n%d is second largest.",arr[1]);
}