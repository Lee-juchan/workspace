#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int square(int n);

int main()
{
	int x;
	printf("input integer: ");
	scanf("%d", &x);

	printf("%d squre = %d\n", x, square(x));
}

int square(int n)
{
	return n * n;
}