#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k;
	for (k = 0; k < 5; k++)
	{
		for (i = 4 - k; i > 0; i--)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * k + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 4; i > 0; i--)
	{
		for (j = i; j < 5; j++)
		{
			printf(" ");
		}
		for (j = 2 * (i - 1) + 1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}