#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer(void);
int get_max(int x, int y);

int get_integer(void)
{
	int n;
	printf("input integer: ");
	scanf("%d", &n);

	return n;
}
int get_max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main(void)
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("max: %d\n", get_max(a, b));
	return 0;
}