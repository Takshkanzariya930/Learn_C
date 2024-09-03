#include <stdio.h>

void main()
{
    int num[3][3],i,j,k,a,b,c,d,e,f,det;

    printf("Enter your matrix (all number from left to right then up to down)\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }

    a = num[0][3] * num[1][2] * num[2][1] ;
    b = num[0][1] * num[1][3] * num[2][2] ;
    c = num[0][2] * num[1][1] * num[2][3] ;
    d = num[0][1] * num[1][2] * num[2][3] ;
    e = num[0][2] * num[1][3] * num[2][1] ;
    f = num[0][3] * num[1][1] * num[2][2] ;

    det = -a-b-c+d+e+f ;

    printf("\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(num[i][j]<10 && num[i][j]>-1)
                printf(" %d ",num[i][j]);
            else
                printf("%d ",num[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    printf("Determinant of the given matrix is: %d",det);

}