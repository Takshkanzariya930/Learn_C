#include <stdio.h>

void main()
{
    int n,tp=1,tp2=1,t=0;

    printf("Enter No. of terms you want to print : ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {
        if (i==1 || i==2)
        {
            t = 1;
        }

        else
        {  
            t = tp + tp2 ;
            tp2 = tp ;
            tp = t ;
        }

        printf("\n%d term = %d",i,t);
    }
}