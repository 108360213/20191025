#include<stdio.h>
#include<stdlib.h>
#include<Header.h>

int main(void)
{
	int i;
	printf("Enter the code:  ");
	scanf_s("%d", &i);
	switch (i)
	{
	case 1:
		manager();
		break;
	case 2:
		hourly_worker();
		break;
	case 3:
		commission_worker();
		break;
	case 4:
		pieceworker();
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}