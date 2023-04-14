#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss();

int main()
{
	int toss;
	int heads = 0;
	int tails = 0;
	srand((unsigned)time(NULL));

	for (toss = 0; toss < 100; toss++)
	{
		if (coin_toss == 1)
		{
			heads++;
		}
		else
		{
			tails++;
		}
	}

	printf("heads: %d\n", heads);
	printf("tails: %d\n", tails);
	return 0;
}

int coin_toss()
{
	int i = rand() % 2;
	if (i == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}