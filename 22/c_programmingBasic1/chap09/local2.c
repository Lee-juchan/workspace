#include <stdio.h>

int inc(int counter);

int main()
{
	int i = 10;

	printf("before call: i = %d\n", i);
	inc(i);
	printf("after call: i = %d\n", i); //���� ������

	return 0;
}

int inc(int counter)
{
	counter++;
	return counter;
}