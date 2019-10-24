#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b;
	printf("Enter # of hours worked (-1 to end): ");
	scanf_s("%f", &a);
	while (a!=-1)
	{
		printf("Enter hourly rate of the worked($00.00): ");
		scanf_s("%f", &b);
		if (a <= 40)
		{
			printf("Salary is $%.2f\n\n", a*b);
		}
		else
		{
			printf("Salary is $%.2f\n\n", a*b*1.5);
		}
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%f", &a);
	}
	printf("\n");
	system("pause");
	return 0;
}