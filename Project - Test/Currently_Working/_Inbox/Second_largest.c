#include <stdio.h>

int main()
{
	int i,j,n;

	printf("Enter number of elements you want to store : ");
	scanf("%d",&n);

	int arr[n];
	int max = arr[0];
	int smax = arr[0];

	for(i=0; i<n; i++)
	{
		printf("Enter [%d] element : ",i+1);
		scanf("%d",&arr[i]);
	}

	for(i=0; i<n; i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}

	for(j=0; j<n; j++)
	{
		if(arr[j]>smax && arr[j]<max)
		{
			smax = arr[j];
		}
	}

	printf("\nlargest is %d",max);
	printf("\nsecond largest is %d",smax);
}