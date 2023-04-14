#include <stdio.h> //calculating route / squre route
#include <math.h>

int main(void)
{
	double num;
	printf("input real number: ");
	scanf("%lf", &num);
	
	printf("pow route: %lf\n", pow(num, 0.5));
	printf("sqrt: %lf\n", sqrt(num));
	
	return 0;
}
