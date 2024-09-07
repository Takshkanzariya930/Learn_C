#include <stdio.h>

int main()
{

    int d,m,y,isleap = 0,isvalid;

    printf("Enter Day :");
    scanf("%d",&d);
    
    printf("Enter Month :");
    scanf("%d",&m);

    printf("Enter Year :");
    scanf("%d",&y);

    if (y%4 == 0)
        isleap = 1;

    if (m<13 && m>0)
    {
        switch (m)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12: 

                if (d>31 || d<1)
                    isvalid = 1;
                
            break;

            case 4: case 6: case 9: case 11: 

                if (d>30 || d<1)
                    isvalid = 1;

            break;

            case 2:

                if (isleap == 0 && (d>28 || d<1))
                    isvalid = 1;

                else if (isleap == 1 && (d>29 || d<1))
                    isvalid = 1;

            break;

       }
    }

    else
        isvalid = 1;

    if (isvalid == 0)

        printf("\n%d-%d-%d is valid date",d,m,y);

    else
        printf("\n%d-%d-%d is invalid date",d,m,y);

}