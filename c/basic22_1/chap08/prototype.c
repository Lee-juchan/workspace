#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double c_to_f(double c_temp);


int main()
{
	printf("Celsius %lf = Fahrenheit %lf\n", 36.0, c_to_f(36.0));
	return 0;
}

double c_to_f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}