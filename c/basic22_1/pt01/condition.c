#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("input 1st num: ");
	scanf("%d", &x);

	printf("input 2nd num: ");
	scanf("%d", &y);

	printf("\n");

	printf("bigger one: %d\n", (x > y) ? x : y);
	printf("smaller one: %d\n", (x < y) ? x : y);

	return 0;
}