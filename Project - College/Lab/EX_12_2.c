#include <stdio.h>

int swap(int *ptr1,int *ptr2)
{
	int temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main()
{
	int a,b;

	printf("Enter value for 'a' : ");
	scanf("%d",&a);

	printf("Enter value for 'b' : ");
	scanf("%d",&b);

	swap(&a,&b);

	printf("\nValue of 'a' is %d",a);
	printf("\nValue of 'b' is %d",b);


}