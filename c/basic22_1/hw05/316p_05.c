#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	printf("input integer: ");
	scanf("%d", &n);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 1; j <= i + 1; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}