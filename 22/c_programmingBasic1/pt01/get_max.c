#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_max(int x, int y);

int main()
{
	int a, b;
	printf("input 2 integers: ");
	scanf("%d %d", &a, &b);

	printf("max of 2 num: %d\n", get_max(a, b));

	return 0;
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