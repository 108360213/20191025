#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int  i, j;
	float balance, rate;
	for (i = 0; i > -1; i++)
	{
		printf("Enter your funds(-1 to end):  ");
		scanf_s("%f", &balance);
		if (balance == -1)
			break;
		printf("Enter rate:  ");
		scanf_s("%f", &rate);
		for (j = 0; j < 12; j++)
		{
			balance = balance + balance * rate;
		}
		printf("Balance:  %.2f\n\n", balance);
	}
	system("pause");
	return 0;
}