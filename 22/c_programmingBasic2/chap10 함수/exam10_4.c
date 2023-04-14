#include <stdio.h> //calculating exam / abs, pow, sqrt
#include <math.h>

int main(void)
{
	double x, y; //input 2 real number
	printf("input real number x: ");
	scanf("%lf", &x);
	printf("input real number y: ");
	scanf("%lf", &y);
	
	printf("x^2 + y^2: %lf\n", pow(x,2)+pow(y,2)); //print formula
	printf("(x+y)^2: %lf\n", pow(x+y,2));
	printf("(|x| + |y|)^2: %lf\n", pow(abs(x)+abs(y), 2));
	printf("(x^2 + y^2)^0.5: %lf\n", sqrt(pow(x,2)+pow(y,2)));
	
	return 0;
}
