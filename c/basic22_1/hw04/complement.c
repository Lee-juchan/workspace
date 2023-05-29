#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int bin;
	printf("input integer: ");
	scanf("%d", &bin);

	int com = ~bin + 1;
	printf("complement: %d\n", com);
	return 0;
}