#include<stdio.h>
#include<stdlib.h>

int pieceworker()
{
	double money_for_items, salary, items;
	printf("Enter the quantity of worker produce:  ");
	scanf_s("%lf", &items);
	printf("Enter the money for each of the items:  ");
	scanf_s("%lf", &money_for_items);
	salary = money_for_items * items;
	printf("The salary is:  %.2lf\n", salary);
}