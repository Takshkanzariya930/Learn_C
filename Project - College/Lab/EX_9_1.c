#include <stdio.h>

int main()
{
	int mat1[3][3],mat2[3][3],mat3[3][3];
	int i,j,k;

	printf("Enter values to Matrix 1 \n\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter [%d][%d] value : ",i+1,j+1);
			scanf("%d",&mat1[i][j]);
		}
	}

	printf("\nEnter values to Matrix 2 \n\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter [%d][%d] value : ",i+1,j+1);
			scanf("%d",&mat2[i][j]);
		}
	}

	printf("\nPerforming multiplication of two matrices.\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mat3[i][j] = 0;

			for(k=0;k<3;k++)
			{
				mat3[i][j] = mat3[i][j] + (mat1[i][k] * mat2[k][j]);
			}
		}
	}

	printf("\nResult of Matrix multiplication.\n\n");

	for(i=0;i<3;i++)
	{
		printf("   ");
		for(j=0;j<3;j++)
		{
			printf("%-7d",mat3[i][j]);
		}
		printf("\n");
	}
}