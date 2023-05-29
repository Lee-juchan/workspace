#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	printf("integer: ");
	scanf("%d", &x);

	printf("*2: ");
	scanf("%d", &y);

	int result = x << y;
	printf("%d << %d: %d", x, y, result);
	return 0;
}