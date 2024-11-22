#include <stdio.h>

struct students
{
	char name[100];
	int enrollment_number;
	int mark[3];
};

int main()
{
	int n,i;

	printf("Enter No of students you want to store data of : ");
	scanf("%d",&n);

	struct students st[n];

	for(i=0;i<n;i++)
	{
		printf("Name : ");
		scanf("%[^\n]",st[i].name);

		printf("Enrollment number : ");
		scanf("%d",st[i].enrollment_number);

		printf("")
	}
}