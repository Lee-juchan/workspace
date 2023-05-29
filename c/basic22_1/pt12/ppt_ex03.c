#include <stdio.h>

int main()
{
	int x = 10;
	int y = 20;
	int* p;

	p = &x;
	printf("p = %u\n", p); //p == &x
	printf("*p = %d\n", *p);//*p == x;

	p = &y;
	printf("p = %u\n", p); //p == &y
	printf("*p = %d\n", *p);//*p == y;
}