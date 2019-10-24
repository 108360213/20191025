#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b,c;
	printf("Enter loan principal (-1 to end): ");
	scanf_s("%f", &a);
	while (a!=-1)
	{
		printf("Enter interest rate: ");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &c);
		printf("The interest charge is $%.2f\n\n", (double)a*b*c / 365);
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &a);
	}
	printf("\n");
	system("pause");
	return 0;
}