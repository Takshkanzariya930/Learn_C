#include <stdio.h>

int main()
{

    int i,j,total;

    printf("Enter a Number : ");
    scanf("%d",&i);

    total = 0;
    
    for(j=0;j<(i+1);j++)
    {
        if(j%6 == 0 && j%4 != 0)
            total = total + j;
    }

    printf("Sum of all numbers that is divisible by 6 but not divisible by 4 is : %d",total);

}