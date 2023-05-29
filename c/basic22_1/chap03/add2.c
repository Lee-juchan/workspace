#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int sum;

	printf("num1: ");
	scanf("%d", &x);

	printf("num2: ");
	scanf("%d", &y);

	sum = x + y;
	printf("sum: %d", sum);
	return 0;
}