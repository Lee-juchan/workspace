#include <stdio.h>

int main()
{
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		sum = sum + i;
	}

	printf("1~10 sum: %d\n", sum);

	return 0;
}