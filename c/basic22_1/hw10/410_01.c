#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

static int pl = 0;
static int mi = 0;
static int mu = 0;
static int di = 0;


int plus(int x, int y)
{
	pl++;
	printf("plus %d times executed\n", pl);
	printf("result: %d\n", x + y);
	return x + y;
}
int mius(int x, int y)
{
	mi++;
	printf("minus %d times executed\n", mi);
	printf("result: %d\n", x - y);
	return x - y;
	}
int muti(int x, int y)
{
	mu++;
	printf("multiple %d times executed\n", mu);
	printf("result: %d\n", x * y);
	return x * y;
	}
double divi(int x, int y)
{
	di++;
	printf("divide %d times executed\n", di);
	printf("result: %lf\n", (double) x / y);
	return (double) x / y;
}


int main()
{
	int x, y;
	char operator;
	printf("input ¼ö½Ä: ");
	scanf("%d %c %d", &x, &operator, &y);

	switch (operator)
	{
		case '+':
			plus(x, y);
			break;
		case '-':
			mius(x, y);
			break;
		case '*':
			muti(x, y);
			break;
		case '/':
			divi(x, y);
			break;
	}
}