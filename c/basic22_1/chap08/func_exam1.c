#include <stdio.h>

void print_stars()
{
	for (int i = 0; i < 30; i++)
	{
		printf("*");
	}
}

int main()
{
	print_stars();
	printf("\nhello world\n");
	print_stars();
	printf("\n");
	return 0;
}