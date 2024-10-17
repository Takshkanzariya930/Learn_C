#include <stdio.h>

void main()
{
    float mk;

    printf("Enter your marks : ");
    scanf("%f",&mk);

    if (mk<=100 && mk>=80)
        printf("Your grade is Distinction.");

    else if (mk<=79 && mk>=60)
        printf("Your grade is First Class.");

    else if (mk<=59 && mk>=40)
        printf("Your grade is Second Class.");

    else if (mk<40 && mk>=0)
        printf("Your Failed.");

    else
        printf("Error: Values out of bound accepted values are from 0 to 100.");

    
}