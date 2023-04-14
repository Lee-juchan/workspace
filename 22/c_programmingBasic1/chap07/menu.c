#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 0;

	do
	{
		printf("1---new pile\n");
		printf("2---open pile\n");
		printf("3---close pile\n");
		printf("choose one\n");

		scanf("%d", &i);
	} while (i < 1 || i>3);

	printf("chosen menu: %d", i);
	return 0;
}