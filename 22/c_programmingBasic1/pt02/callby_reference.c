#include <stdio.h>

void plusref(int* a);

int main()
{
	int i = 10;

	plusref(&i);
	printf("result: %d\n", i);
}

void plusref(int *a)
{
	*a = *a + 1;
}