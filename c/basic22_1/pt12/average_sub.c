#include <stdio.h>

#define STUDENTS 5

int get_average(int* score, int size);

int main()
{
	int score[STUDENTS] = { 1,2,3,4,5 };
	int avg;

	avg = get_average(score, STUDENTS);
	printf("average: %d\n", avg);

	return 0;
}

int get_average(int *score, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += score[i];
	}

	return sum / size;
}