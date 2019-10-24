#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	float b, c, d, e;
	printf("Enter account number (-1 to end): ");
	scanf_s("%d", &a);
	while (a!=-1)
	{
		printf("Enter beginning balance: ");
		scanf_s("%f", &b);
		printf("Enter total charges: ");
		scanf_s("%f", &c);
		printf("Enter total credits: ");
		scanf_s("%f", &d);
		printf("Enter credit limit: ");
		scanf_s("%f", &e);
		if ((b + c - d) > e)
		{
			printf("\nAccount: %d",a);
			printf("\nCredit limit: %.2f",e);
			printf("\nBalance: %.2f",b+c-d);
			printf("\nCredit Limit Exceed.");
		}
		
		printf("\n\nEnter account number (-1 to end): ");
		scanf_s("%d", &a);

	}
	printf("\n");
	system("pause");
	return 0;
}