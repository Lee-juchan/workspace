#include <stdio.h>

int main()
{
	int x = 10;
	int y = 10;
	int z = 33;

	x += 1;
	y *= 2;
	z %= 10 + 20;

	printf("x = %d, y = %d, z = %d\n", x, y, z);
	return 0;
}