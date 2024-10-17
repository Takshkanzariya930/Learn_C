#include <stdio.h>

void main()
{
    int num,f=1;

    printf("Enter number to find factorial : ");
    scanf("%d",&num);

    for(int i = 1;i<=num;i++)
    {
        f = f*i ;
    }

    printf("Factorial of %d is %d",num,f);
}