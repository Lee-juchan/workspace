#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("input number: ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("¦��\n");
	}
	else
	{
		printf("Ȧ��\n");
	}

	return 0;
}