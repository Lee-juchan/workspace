#include <stdio.h>
#include <math.h> //using pow(double, double)

int main(void)
{
	double x, y;
	printf("input real number x: "); //input x
	scanf("%lf", &x);
	printf("input real number y: "); //input y
	scanf("%lf", &y);
	
	printf("x^y: %f\n", pow(x,y)); //print x^y
	printf("y^x: %f\n", pow(y,x)); //print y^x
	
	return 0;
}
