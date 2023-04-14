#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	printf("input num: ");
	scanf("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("sum from 1 to %d: %d", n, sum);
	return 0;
}