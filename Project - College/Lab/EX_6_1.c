#include <stdio.h>

void main()
{
    int num,rev_num=0;

    printf("Enter number : ");
    scanf("%d",&num);

    while (num!=0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }

    printf("Reversed number is %d",rev_num);
}