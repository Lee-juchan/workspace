#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sequential_search(int* list, int key);

#define SIZE 5

int main()
{
	int list[SIZE] = { 3,5,2,1,4 };

	sequential_search(list, 1);

	return 0;
}

void sequential_search(int* list, int key)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (list[i] == key)
		{
			printf("list[%d]\n", i);
		}
	}
}