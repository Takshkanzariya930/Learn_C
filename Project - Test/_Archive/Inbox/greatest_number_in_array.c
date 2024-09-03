#include <stdio.h>

int main()
{

    int num[5],i,j;
    int max_index = 0;

    printf("Enter your numbers (Max 5): \n");
    
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&num[i]);
    }

    for (i = 0;i<5;i++)
    {
        j = 0 ;

        while (j<5)
        {
            if (num[j]>num[i])
            {
                break;
            }
            j = j + 1 ;
        }
        
        if (j == 5)
        {
            max_index = i ;
            break;
        }
    }

    printf("%d is the greatest number in given numbers.",num[max_index]);

}