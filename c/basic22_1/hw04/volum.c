#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x, y, h;
	printf("input x, y, h: ");
	scanf("%lf %lf %lf", &x, &y, &h);

	double volume = x * y * h;
	printf("volume: %lf\n", volume);
	return 0;
}