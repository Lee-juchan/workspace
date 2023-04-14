#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z;
	printf("input 3 integers: ");
	scanf("%d %d %d", &x, &y, &z);

	int sub = (x > y) ? x : y;
	
	int max = (sub > z) ? sub : z;

	printf("max: %d\n", max);
	return 0;
}