#include<stdio.h>

int main()
{
	int mat[5][5],max,maxrow,maxcol,i,j;

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter element [%d][%d] : ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}

	max = mat[0][0];

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(mat[i][j] > max)
			{
				max = mat[i][j];
				maxrow = i;
				maxcol = j;
			}
		}
	}

	printf("\n%d is maximum in 5*5 matrix and it row and column is %d,%d.",max,maxrow + 1,maxcol + 1);
}