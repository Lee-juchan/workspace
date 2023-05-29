#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.141592

double cal_area(double radius);

int main()
{
	double radius;
	printf("input radius: ");
	scanf("%lf", &radius);

	printf("area of circle: %lf\n", cal_area(radius));
	return 0;
}

double cal_area(double radius)
{
	return radius * radius * PI;
}