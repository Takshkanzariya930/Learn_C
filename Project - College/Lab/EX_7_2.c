#include <stdio.h>

void main()
{
    int n,i;
    float total = 0,fac;

    printf("To find the answer of this series 1 + 1/2! + 1/3! + 1/4! +....+ 1/n!");

    printf("\n\nEnter the No. of terms you want : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    	fac = 1; 

       for(int j=1;j<=i;j++)
       {
       		fac = fac * j;
       }

        total = total + (1/fac);

    }

    printf("\nAnswer of this series is %.f",total);
}