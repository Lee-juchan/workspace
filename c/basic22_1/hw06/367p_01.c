#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double x);

int main()
{
	double n;

	printf("input integer: ");
	scanf("%lf", &n);

	printf("%lf square = %lf\n", n, square(n));
	return 0;
}

double square(double x)
{
	return x * x;
}