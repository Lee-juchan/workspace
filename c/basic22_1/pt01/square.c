#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int square();

int main()
{
	int result = square(5);
	printf("%d\n", result);

	return 0;
}

int square(int n)
{
	return n * n;
}