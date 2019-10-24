#include<stdio.h>
#include<stdlib.h>

int commission_worker()
{
	double total_weekly_sales, salary;
	printf("Enter the total weekly sales:  ");
	scanf_s("%lf", &total_weekly_sales);
	salary = 250 + total_weekly_sales * 0.057;
	printf("The sarly is:  %.2lf\n", salary);
}