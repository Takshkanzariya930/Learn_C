#include <stdio.h>

void main()
{
    int i,j,n;

    printf("Enter No. of rows : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for (j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}