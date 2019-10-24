#include<stdio.h>
#include<stdlib.h>

int hourly_worker()
{
	double working_hours, hourly_hour, salary;
	printf("Enter the working hours:  ");
	scanf_s("%lf", &working_hours);
	printf("Enter the hourly hour:  ");
	scanf_s("%lf", &hourly_hour);
	if (working_hours > 40)
	{
		salary = hourly_hour * 40 + hourly_hour * 1.5 * (working_hours - 40);
	}
	else
	{
		salary = hourly_hour * working_hours;
	}
	printf("The salary is:  %.2lf\n", salary);
}