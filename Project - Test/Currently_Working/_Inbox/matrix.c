#include <stdio.h>

void main()
{

    int num[3][3],i,j,k;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }

}