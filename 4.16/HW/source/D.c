#include<stdio.h>
#include<stdlib.h>

int D()
{
	int i, j;
	printf("(D)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i + 1; j--)
		{
			printf(" ");
		}
		for (j = 0; j < i + 1; j++)
		{
			printf("*");
			if (j == i)
			{
				printf("\n");
			}
		}
	}
}