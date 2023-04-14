#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int sum = 0;

	do
	{
		printf("input number: ");
		scanf("%d", &n);
		sum += n;
	} while (n != 0);

	printf("sum: %d", sum);
	return 0;
}