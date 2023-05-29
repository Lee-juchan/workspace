#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define RANGE 100

void array_build();
int print_max(int array[]);

static int array[SIZE];

int main()
{
	array_build();

	int max = print_max(array);
	int min = print_min(array);
		printf("max: %d, min: %d", max, min);

		return 0;
}

void array_build()
{
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % RANGE; //편의를 위해, 숫자 범위 0~99로 조정
	}
}

int print_max(int array[])
{
	int max = array[0];

	for (int i = 0; i < SIZE; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
	}
	return max;
}

int print_min(int array[])
{
	int min = array[0];

	for (int i = 0; i < SIZE; i++)
	{
		if (min > array[i])
		{
			min = array[i];
		}
	}
	return min;
}