#include <stdio.h>

int main()
{
	int arr1[50],arr2[50],arr3[100],i,n1,n2;

	printf("Enter no. of elements you want to store in first array: ");
	scanf("%d",&n1);

	printf("\n");

	for(i=0;i<n1;i++)
	{
		printf("Enter [%d] element: ",i+1);
		scanf("%d",&arr1[i]);
	}

	printf("\n");

	printf("Enter no. of elements you want to store in second array: ");
	scanf("%d",&n2);

	printf("\n");

	for(i=0;i<n2;i++)
	{
		printf("Enter [%d] element: ",i+1);
		scanf("%d",&arr2[i]);
	}

	for(i=0;i<n1;i++)
	{
		arr3[i] = arr1[i];
	}

	for(i=0;i<n2;i++)
	{
		arr3[n1+i] = arr2[i];
	}

	printf("\n");

	for(i=0;i<(n1+n2);i++)
	{
		printf("[%d] element of arr3 : %d",i+1,arr3[i]);
		printf("\n");
	}

}