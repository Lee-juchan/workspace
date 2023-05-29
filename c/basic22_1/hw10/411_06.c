#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int base, int power_raised)
{
	if (power_raised <= 1)
		return base;
	else
		return base * power(base, power_raised - 1);
}

int main()
{
	int x, y;
	printf("input integer: ");
	scanf("%d %d", &x, &y);

	int result = power(x, y);

}