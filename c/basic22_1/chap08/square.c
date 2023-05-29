#include <stdio.h>

int square(int n);

int main()
{
	int result;

	result = square(5);
	printf("area of square: %d\n", result);
}

int square(int n)
{
	return n * n;
}