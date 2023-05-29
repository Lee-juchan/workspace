#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main()
{
	int x = 0;
	long f;

	printf("input integer: ");
	scanf("%d", &x);

	printf("factorial(%d)\n", x);

	f = factorial(x);
	printf("%d! = %d\n", x, f);

	return 0;
}