#include <stdio.h>

int main()
{

	int i = 5,fac=1;

	for(int j=1;j<=i;j++)
		{
			fac = fac * j;
		}

	printf("%d",fac);
}