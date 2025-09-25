#include<stdio.h>
int main()
{
	int n,i,j,temp;

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
		for(j=0;j<(n-i-1);j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printf("\nPrinting array.....");

    for(i=0;i<n;i++)
	{
		printf("\n[%d] element is : %d",i+1,arr[i]);
	}
}