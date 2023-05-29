#include <stdio.h>
#define SIZE 10

void array_copy(int a[], int b[]);

int main() 
{
	int a[SIZE] = { 1,2,3, };
	int b[SIZE] = { 0,0,0, };

	array_copy(a, b);

	for (int i = 0; i < SIZE; i++) 
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
}

void array_copy(int a[], int b[]) 
{
	for (int i = 0; i < SIZE; i++)
	{
		b[i] = a[i];
	}
}