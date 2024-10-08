#include <stdio.h>

void main()
{
    int n,i;
    float sum;

    printf("Enter No. of number you want to enter : ");
    scanf("%d",&n);

    float num[n];

    for (i=0 ; i<n ; i++)
    {
        printf("Enter your [%d] number : ",i+1);
        scanf("%f",&num[i]);
    }

    for (i=0 ; i<n ; i++)
    {
        sum = sum + num[i];
    }

    printf("sum is %.2f",sum);
}