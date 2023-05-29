#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, d;
	double result;

	printf("input numerator: ");
	scanf("%d", &n);

	printf("input denominator: ");
	scanf("%d", &d);

	if (d == 0)
	{
		printf("inconsistent\n");
	}
	else
	{
		result = (double) n / d;
		printf("%d / %d = %lf\n", n, d, result);
	}
	return 0;
}