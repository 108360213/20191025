#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b;
	printf("Enter the length (-1 to end): ");
	scanf_s("%d", &a);
	if (a!=-1)
	{
		printf("Enter the breadth (-1 to end): ");
		scanf_s("%d", &b);
		if (b != -1)
		{
			for (int i = 0; i < a; i++)
			{
				for (int j = 0; j < b; j++)
				{
					if (0 < j&&j < b - 1 && 0 < i&& i< a - 1)
						printf(" ");
					else
						printf("+");
				}
				printf("\n");
			}
		}
		
	}
	printf("\n");
	system("pause");
	return 0;
}