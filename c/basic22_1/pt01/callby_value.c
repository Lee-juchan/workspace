#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int plusone(int a);

int main()
{
	int x, result;
	x = 10;

	result = plusone(x);
	printf("x = %d, result = %d\n", x, result);

	return 0;
}

int plusone(int a)
{
	return a = a + 1;
}