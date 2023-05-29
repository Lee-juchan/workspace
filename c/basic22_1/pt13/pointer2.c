#include <stdio.h>

int main()
{
	int x = 10;
	int y = 20;
	int* p;

	p = &x;
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);

	p = &y;
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);

	return 0;
}