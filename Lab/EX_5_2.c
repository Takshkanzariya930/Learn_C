#include <stdio.h>

void main()
{
    int num1,num2;
    char op;

    printf("Enter your First Number : ");
    scanf("%d",&num1);

    printf("Enter your Second Number : ");
    scanf("%d",&num2);

    getchar();

    printf("Enter Operation you want to perform (+,-,*,/) : ");
    scanf("%c",&op);

    switch (op)
    {
        case '+':
            printf("%d + %d = %d",num1,num2,(num1+num2));
            break;

        case '-':
            printf("%d - %d = %d",num1,num2,(num1-num2));
            break;

        case '*':
            printf("%d * %d = %d",num1,num2,(num1*num2));
            break;

        case '/':
            printf("%d / %d = %d",num1,num2,(num1/num2));
            break;

        default:
            printf("Incorrect Operator.");
    }
}