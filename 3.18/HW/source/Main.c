#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a;
	printf("Enter sales in dollars (-1 to end):");
	scanf_s("%f", &a);
	while (a!=-1)
	{
		printf("Salary is: %.2f",(double)200+a*0.09);
		printf("\n\nEnter sales in dollars (-1 to end):");
		scanf_s("%f", &a);
	}
	printf("\n");
	system("pause");
	return 0;
}