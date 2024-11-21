#include <stdio.h>

int factorial(int a)
{
	if(a == 0 || a == 1)
		return 1;
	else
		return a*factorial(a-1);
}

int main()
{
	int x;

	printf("Enter a number you want to find factorial of : ");
	scanf("%d",&x);

	printf("\nFactorial of %d is %d",x,factorial(x));
}