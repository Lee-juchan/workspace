#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n)
{
	if (n <= 1)
		return 1;
	else
		return n + sum(n - 1);
}

int main()
{
	int x;
	printf("input integer: ");
	scanf("%d", &x);

	int result = sum(x);
	printf("%d", result);

	return 0;
}