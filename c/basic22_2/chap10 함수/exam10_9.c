#include <stdio.h> //expression calculating function
#include <math.h>

double exprs1(double x, double y);
double exprs2(double x, double y);
double exprs3(double x, double y);
double exprs4(double x, double y);

int main(void)
{
	double n1, n2;
	printf("input n1, n2: ");
	scanf("%lf %lf", &n1, &n2);
	
	printf("exprs1: %lf\n", exprs1(n1, n2));
	printf("exprs2: %lf\n", exprs2(n1, n2));
	printf("exprs3: %lf\n", exprs3(n1, n2));
	printf("exprs4: %lf\n", exprs4(n1, n2));
	
	return 0;
}

double exprs1(double x, double y)
{
	return pow(x, 2) + pow(y, 2);
}
double exprs2(double x, double y)
{
	return pow(x+y, 2);
}
double exprs3(double x, double y)
{
	return pow(fabs(x) + fabs(y), 2);
}
double exprs4(double x, double y)
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
