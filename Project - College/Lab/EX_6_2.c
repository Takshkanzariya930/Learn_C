#include <stdio.h>

int main()
{
    int i,n,f1=0,f2=1,term;

    printf("Enter number of terms you want : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        if(i==0)
            printf("\n0");

        else if(i==1)
            printf("\n1");

        else
        {   
            term = f1 + f2;
            f1 = f2;
            f2 = term;
            
            printf("\n%d",term);
        }
    }
}