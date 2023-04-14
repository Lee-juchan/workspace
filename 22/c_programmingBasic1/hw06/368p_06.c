#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	printf("%d\n", even(2));
	printf("%d\n", absolute(-6));
	printf("%d\n", sign(-5));
}

int even(int n)
{
	if (n % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int absolute(int n)
{
	if (n >= 0)
	{
		return n;
	}
	else
	{
		return -n;
	}
}

int sign(int n)
{
	if (n > 0)
	{
		return 1;
	}
	else if (n == 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}