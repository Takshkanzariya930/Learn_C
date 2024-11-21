#include <stdio.h>

float add(float a,float b)
{
	printf("\nResult is %f",a+b);

}

float sub(float a,float b)
{
	printf("\nResult is %f",a-b);
}

float mul(float a,float b)
{
	printf("\nResult is %f",a*b);
}

float div(float a,float b)
{
	printf("\nResult is %f",a/b);
}

int main()
{
	int x,y;
	char op;

	printf("Enter first number : ");
	scanf("%d",&x);

	printf("Enter second number : ");
	scanf("%d",&y);

	getchar();

	printf("Enter operator (+,-,*,/) : ");
	scanf("%c",&op);

	switch(op)
	{
	case '+':
	{
		add(x,y);
		break;
	}
	case '-':
	{
		sub(x,y);
		break;
	}
	case '*':
	{
		mul(x,y);
		break;
	}
	case '/':
	{
		div(x,y);
		break;
	}
	default:
		printf("\nINVALID OPERATORE.");
	}
}