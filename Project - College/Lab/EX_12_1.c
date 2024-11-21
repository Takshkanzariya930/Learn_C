#include <stdio.h>

int add(int n,int arr[n])
{
	int i,result = 0;

	for(i=0;i<n;i++)
	{
		result = result + arr[i];
	}

	return result;
}

int main()
{
	int n,i,sum;

	printf("Enter No of elements you want to store : ");
	scanf("%d",&n);

	int array[n];

	for(i=0;i<n;i++)
	{
		printf("Enter [%d] element : ",i+1);
		scanf("%d",&array[i]);
	}

	sum = add(n,array);

	printf("\nSum of all the elements in arr is %d",sum);
}