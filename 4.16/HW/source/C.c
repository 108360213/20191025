#include<stdio.h>
#include<stdlib.h>

int C()
{
	int i, j;
	printf("(C)\n");
	for (i = 10; i > 0; i--)
	{
		for (j = 0; j < 10 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("*");
			if (j == i - 1)
			{
				printf("\n");
			}
		}
	}
}