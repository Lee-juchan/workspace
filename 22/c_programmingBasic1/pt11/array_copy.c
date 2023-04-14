#include <stdio.h>
#define SIZE 5

int main()
{
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = {0,};

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", b[i]);
		
	}
	printf("\n");

	for (int i = 0; i < SIZE; i++)
	{
		b[i] = a[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");

	return 0;
}