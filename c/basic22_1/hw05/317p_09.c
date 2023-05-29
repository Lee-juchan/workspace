#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int sum = 0;

	while (1)
	{
		i = 1;
		sum += i;
		i++;

		if (sum > 100000)
		{
			sum -= i;
			i--;

			printf("1 ~ %d sum: %d\n", i, sum);
			break;
		}
	}	
	return 0;
}