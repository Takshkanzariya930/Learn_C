#include <stdio.h>

int sum(int arr1[],int arr2[],int n1,int n2)
{
	int result=0,i;

	for(i=0;i<n1;i++)
	{
		result += arr1[i];
	}

	for(i=0;i<n2;i++)
	{
		result += arr2[i];
	}

	return result;
}

int main()
{
	int arr1[50],arr2[50],n1,n2,i;

	printf("Enter No of elements you want to store in first array : ");
	scanf("%d",&n1);
	printf("\n");

	for(i=0;i<n1;i++)
	{
		printf("Enter [%d] element : ",i+1);
		scanf("%d",&arr1[i]);
	}

	printf("\nEnter No of elements you want to store in second array : ");
	scanf("%d",&n2);
	printf("\n");

	for(i=0;i<n2;i++)
	{
		printf("Enter [%d] element : ",i+1);
		scanf("%d",&arr2[i]);
	}

	printf("\nsum of every element from both arrays is %d",sum(arr1,arr2,n1,n2));
}