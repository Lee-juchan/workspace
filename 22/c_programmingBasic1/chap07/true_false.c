#include <stdio.h>

int main(void)
{
	int i = 50;

	while (i)
	{
		printf("%d = true\n", i);
		i--;
	}
	printf("%d = false\n", i);
	return 0;
}