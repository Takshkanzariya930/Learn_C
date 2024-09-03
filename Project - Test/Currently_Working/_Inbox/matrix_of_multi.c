#include <stdio.h>

void main()
{

    int i,j,k = 0,x;

    printf("Enter any number to print matrix of there multiple : ");
    scanf("%d",&x);

    printf("\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            k = k + 1;
            if((x*k)<10)
                printf(" %d  ",x*k);
            else
                printf("%d  ",x*k);
        }

        printf("\n");
    }

}