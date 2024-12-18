// Not completed yet 
// Not completed yet 
// Not completed yet 
// Not completed yet 

#include <stdio.h>

int insert()
{
	printf("\n.....Inserting element");

	printf("\nEnter element you want to enter : ");
	scanf("%d",&element);

	printf("\nEnter position you want to insert element at : ");
	scanf("%d",&p);

	for(i=n;i>p;i--)
	{
		arr[i] = arr[i-1];
	}

	printf("\nElement inserted.");
	arr[p] = element;
}

int delete()
{
	printf("\n......Deleting element");

		printf("\nFor deleting element by value press '0' and to delete by indexing press '1'.");
		scanf("%d",&choice);

		if(choice == 0)
		{

			printf("\nEnter element which you want to delete : ");
			scanf("%d",&element);

			for(i=0;i<n;i++)
			{
				if(arr[i] == element)
				{
					p = i;
					found = 1;
				}
			}

			if(found != 1)
			{
				printf("\nElement does not exist.");
				return 0;
			}

		}
		else
		{

			printf("\nEnter index of element you want to delete : ");
			scanf("%d",&p);

			if(p<0 || p>n)
			{
				printf("\ninvalid index");
			}
		}

		for(i=p;i<n;i++)
		{
			arr[i] = arr[i+1];
		}

		printf("\nElement deleted.");
}

int main()
{
	int n,i,p,choice,temp,element,found;

	printf("Enter number of elements you want to store : ");
	scanf("%d",&n);

	int arr[n+1];

	for(i=0;i<n;i++)
	{
		printf("Enter [%d] element : ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("\nDo you want to edit array press 1 to continue and 0 to exit : ");
	scanf("%d",&choice);

	if(choice != 1)
	{
		return 0;
	}

	printf("\nEnter '0' to insert and '1' to delete : ");
	scanf("%d",&choice);

	if(choice == 0)
	{
		n = n+1;
	}

	else
	{
		n = n-1;
	}

	printf("\nPrinting array.....");

    for(i=0;i<n;i++)
	{
		printf("\n[%d] element is : %d",i+1,arr[i]);
	}
}