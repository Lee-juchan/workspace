#include <stdio.h> //multiply & divide function

int multi(int num1, int num2);
double divi(double num1, double num2);

int main(void)
{
	double n1, n2;
	printf("input num1: "); //input num1, num2
	scanf("%lf", &n1);
	printf("input num2: ");
	scanf("%lf", &n2);
	
	printf("n1 * n2: %d\n", multi(n1, n2)); //multiply
	printf("n1 / n2: %lf\n", divi(n1, n2)); //divide
	
	return 0;
}

int multi(int num1, int num2) //multiplication function
{
	return num1 * num2;
}
double divi(double num1, double num2) //division fuction
{
	return num1 / num2;
}
