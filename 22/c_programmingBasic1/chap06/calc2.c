#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char op;
	int x, y, result;

	printf("int put formula\n");
	printf("ex) 2 + 5\n\n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);

	switch (op)
	{
		case '+':
			result = x + y; break;
		case '-':
			result = x - y; break;
		case '*':
			result = x * y; break;
		case '/':
			result = x / y; break;
		case '%':
			result = x % y; break;
		default:
			printf("This operator is Not supported\n");
	}

	printf("%d %c %d = %d\n", x, op, y, result);
	return 0;

}