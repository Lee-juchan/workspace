#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double n;
	int r;

	printf("input num(double): ");
	scanf("%lf", &n);

	printf("input involution: ");
	scanf("%d", &r);

	double result = 1;
	for (int i = 0; i < r; i++)
	{
		result *= n;
	}
	printf("result: %lf", result);
}