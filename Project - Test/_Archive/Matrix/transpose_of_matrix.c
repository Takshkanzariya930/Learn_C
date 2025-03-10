#include <stdio.h>

int main()
{
	int i,j,m,n;

	printf("Enter number of rows of your matrix : ");
	scanf("%d",&m);

	printf("Enter number of colomn of your matrix : ");
	scanf("%d",&n);

	int arr[m][n];
	int tarr[n][m];

	printf("\nEnter matrix : \n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter [%d][%d] element : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\nTaking transpose....");

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			tarr[i][j] = arr[j][i];
		}
	}

	printf("\nPrinting matrix.....\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",tarr[i][j]);
        }
        printf("\n");
    }
}