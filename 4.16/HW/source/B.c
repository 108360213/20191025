#include<stdio.h>
#include<stdlib.h>

int B()
{
	int i, j;
	printf("(B)\n");
	for (i = 10; i > 0; i--)
	{
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