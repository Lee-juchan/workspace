#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int sum = 0;
	
	printf("input integer: ");
	scanf("%d", &n);

	int i = 1;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("sum from 1 to %d = %d\n", n, sum);
	return 0;
}