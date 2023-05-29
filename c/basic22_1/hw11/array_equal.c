#include <stdio.h>
int array_equal(int a[], int b[]);

#define SIZE 10

int main()
{
	int a[SIZE] = { 1,2,3,4, };
	int b[SIZE] = { 1,2,3,4, };

	int result = array_equal(a, b);
	if (result == 1)
	{
		printf("same array\n");
	}
	else
	{
		printf("different array\n");
	}
	return 0;
}

int array_equal(int a[], int b[])
{
	int equal = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (a[i] == b[i])
		{
			equal++;
		}
	}

	if (equal == SIZE)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}