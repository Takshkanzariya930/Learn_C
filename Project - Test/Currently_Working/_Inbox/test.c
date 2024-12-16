#include <stdio.h>

void main()
{
	int i,n;
	float term = 100;

	printf("Enter no of terms : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\n%.2f ",term);

		term = term/2;
	}
}