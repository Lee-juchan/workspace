#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 5

int main()
{
	int s[ROWS][COLS];
	srand(time(NULL));

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			s[i][j] = (rand() % 90) +10;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
	return 0;
}