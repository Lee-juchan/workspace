#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char op;
	int x, y, result;

	printf("input formula\n");
	printf("ex) 2 + 5\n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
	{
		result = x + y;
	}
	else if (op == '-')
	{
		result = x - y;
	}
	else if (op == '*')
	{
		result = x * y;
	}
	else if (op == '/')
	{
		result = x / y;
	}
	else if (op == '%')
	{
		result = x % y;
	}
	else
	{
		printf("This operator is Not supported");
	}

	printf("%d %c %d = %d\n", x, op, y, result);
	return 0;

}