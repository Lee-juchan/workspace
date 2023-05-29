#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	printf("input 2 integers: ");
	scanf("%d %d", &x, &y);

	if (y == 0)
	{
		printf("Y can't be \'0\'\n");
		return 0;
	}
	else
	{
		printf("quotient: %d, rest: %d\n", x / y, x % y);
	}
	return 0;
}