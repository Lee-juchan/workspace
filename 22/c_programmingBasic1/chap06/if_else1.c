#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("input number: ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("Even number\n");
	}
	else
	{
		printf("Odd number\n");
	}
	return 0;
}