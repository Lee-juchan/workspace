#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int sum, diff, mul, div;

	x = 20;
	y = 10;

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	printf("sum: %d\n", sum);
	printf("diff: %d\n", diff);
	printf("mul: %d\n", mul);
	printf("div: %d\n", div);

	return 0;
}