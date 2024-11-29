#include <stdio.h>

struct employee
{
	char name[100];
	float basic_salary;
	float net_salary;
};

float calc_net_salary(float basic_salary)
{
	float DA = 1.4 * basic_salary;
	float HRA = 0.15 * basic_salary;
	float TA = 400;
	float total = basic_salary + DA + HRA + TA;
	float income_tax = total * 0.05 ;

	float net_salary = total - income_tax;

	return net_salary;
}

int main()
{
	int n,i;

	printf("Enter Number of Employees : ");
	scanf("%d",&n);

	struct employee emp[n];

	printf("\nEnter the details of employee.\n");

	for(i=0;i<n;i++)
	{
		printf("\nEnter name of %d employee : ",i+1);
		getchar();
		scanf("%[^\n]",emp[i].name);

		printf("ENter basic salary of %d employee : ",i+1);
		getchar();
		scanf("%f",&emp[i].basic_salary);

		emp[i].net_salary = calc_net_salary(emp[i].basic_salary);
	}

	for(i=0;i<n;i++)
	{
		printf("\n\nEmployee No.[%d] : \n",i+1);
		printf("\nName : %s",emp[i].name);
		printf("\nBasic salary : %.2f",emp[i].basic_salary);
		printf("\nNet salary : %.2f",emp[i].net_salary);
	}
}

