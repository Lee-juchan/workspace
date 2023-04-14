#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}
		printf("%d\n", i);
	}
	return 0;
}