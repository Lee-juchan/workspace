#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("input num: ");
	scanf("%d", &num);

	if (num > 0)
	{
		printf("positive number\n");
	}
	printf("number: %d\n", num);
	return 0;
}