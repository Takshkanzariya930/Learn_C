#include <stdio.h>

void main()
{
    int total = 0,n;

    printf("To find the answer of this series 1*1 + 2*2 + 3*3 + 4*4 +....+ n*n");

    printf("\n\nEnter the No. of terms you want : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        total = total + (i*i);
    }

    printf("\nAnswer of this series is %d",total);
}