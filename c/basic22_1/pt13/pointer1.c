#include <stdio.h>

int main()
{
	int i = 3000;
	int* p;

	p = &i;

	printf("i = %d\n", i);
	printf("&i = %d\n", &i);

	printf("p = %d\n", p);
	printf("*p = %d\n", *p);

	return 0;
}