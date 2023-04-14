#include <stdio.h>

int main()
{
	int score[5] = { 31, 63, 62, 87,14 };

	for (int i = 0; i < 5; i++)
	{
		printf("score[%d] = %d\n", i, score[i]);
	}

	return 0;
}