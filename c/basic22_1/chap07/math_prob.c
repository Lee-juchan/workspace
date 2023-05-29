#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y, answer, i;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d = ", x, y);
		scanf("%d", &answer);

		if (x + y == answer)
		{
			printf("correct\n\n");
		}
		else
		{
			printf("incorrect\n\n");
		}
	}
	return 0;
}