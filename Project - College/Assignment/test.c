#include <stdio.h>

void modifyvalue(int x)
{
	x = 20;
	printf("Inside function : x = %d \n",x);
}

int main()
{
	int a = 10 ;
	printf("Before function call : a = %d \n",a);
	modifyvalue(a);
	printf("after function call : a = %d \n",a);

}