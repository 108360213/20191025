#include<stdio.h>
#include<stdlib.h>

int manager()
{
	double salary;
	printf("Enter the weekly salary:  ");
	scanf_s("%lf", &salary);
	printf("The salary is: %.2lf\n", salary);
}