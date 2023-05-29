#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	printf("x=%d, y=%d\n", x, y);

	int t;

	t = x;
	x = y;
	y = t;
	printf("x=%d, y=%d\n", x, y);
	return 0;
}