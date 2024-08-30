#include <stdio.h>

void main()
{

    int num[5],check,i,j;

    printf("Enter your numbers (Max 5): \n");
    
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&num[i]);
    }

    for (i = 0;i<5;i++)
    {
        for (j = 0;j<5;j++)
        {
            if (num[i]>num[j])
            {
                check = i ;
                break;
            }
        }
            
        if (check == i);
        {
            break;
        }        
            
    }

    printf("%d is the greatest number.",num[i]);

}