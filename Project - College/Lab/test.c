#include <stdio.h>

int main()
{
	int x = 10;
	int arr[5] = {1,5,7,3,4};

	int *ptr = &x;
	int *ptr2 = arr;

	// printf("%d\n",ptr);
	// printf("%d\n",&x);
	// printf("%d\n",x);
	// printf("%d\n",*ptr);
	// printf("%d\n",&ptr);

	printf("%d\n",arr);
	printf("%d\n",ptr2);

	ptr2 = ptr2 + 1;
	arr = arr + 1;

	printf("%d\n",*(ptr2+1));
	printf("%d", *(arr+1));

}