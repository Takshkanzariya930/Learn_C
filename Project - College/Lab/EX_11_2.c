#include <stdio.h>

double power(int a,int b)
{
	int i,result = 1;

	for(i=1;i<=b;i++)
	{
		result = result * a ;
	}
	return result;
}

int main()
{
	int x,y;

	printf("Enter base : ");
	scanf("%d",&x);

	printf("Enter power : ");
	scanf("%d",&y);

	printf("\nAnswer is %lf",power(x,y));

}