#include <stdio.h>

void main()
{
    int fac=1,n,i;
    float total = 0;

    printf("To find the answer of this series 1 + 1/2! + 1/3! + 1/4! +....+ 1/n!");

    printf("\n\nEnter the No. of terms you want : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       fac = 1; 

       for(int j=1;j<=i;j++)
       {
            if (j==1)
                fac = 1 ;
            else
                fac = fac * j;
       }

        total = total + (1/fac);

    }

    printf("\nAnswer of this series is %.3f",total);
}