#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer();
double get_double();
char get_char();

int main(void)
{
	int x;
	double y;
	char z;
	x = get_int();
	y = get_double();
	z = get_char();

	printf("sum: %lf\n", x + y + z);
	return 0;
}

int get_integer()
{
	int n;
	printf("input integer: ");
	scanf("%d", &n);
	return n;
}

double get_double()
{
	double n;
	printf("intput double: ");
	scanf("%lf", &n);
	return n;
}

char get_char()
{
	char n;
	printf("input char: ");
	scanf("%c", &n);
	return n;
}