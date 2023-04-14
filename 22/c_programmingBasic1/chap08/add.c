#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer();
int add(int x, int y);

int get_integer()
{
	int n;
	printf("input integer: ");
	scanf("%d", &n);
	return n;
}

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int a, b;

	a = get_integer();
	b = get_integer();

	int sum = add(a, b);
	printf("sum: %d", sum);
	return 0;
}