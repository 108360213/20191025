#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k, x;
	for (i = 1; i < 500; i++)
	{
		for (j = 1; j < 500; j++)
		{
			for (k = 1; k < 500; k++)
			{
				x = i * i;
				if (x == (k * k) + (j * j))
				{
					printf("%d^2 = %d^2 + %d^2\n", i, k, j);
				}
			}
		}
	}
	system("pause");
	return 0;
}