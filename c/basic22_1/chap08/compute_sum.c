#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compute_sum(int n);

int main()
{
	int n, sum;

	printf("input integer: ");
	scanf("%d", &n);
	
	sum = compute_sum(n);
	printf("1~%d sum: %d", n, sum);
}

int compute_sum(int n)
{
	int result = 0;

	for (int i = 1; i <= n; i++)
	{
		result += i;
	}
	return result;
}