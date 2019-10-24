#include<stdio.h>
#include<stdlib.h>

int A()
{
	int i, j;
	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
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