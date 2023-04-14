#include <stdio.h>
#define SIZE 5

int main()
{
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 1,2,3,4,5 };

	for (int i = 0; i < SIZE; i++)
	{
		if (a[i] != b[i])
		{
			printf("Not same\n");
			break;
		}
	}
	return 0;
}