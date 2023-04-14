#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long fact = 1;
	int i = 1;
	int n;

	printf("input integer: ");
	scanf("%d", &n);

	while (i <= n)
	{
		fact *= i;
		i++;
	}
	printf("%d!: %d\n", n, fact);
	return 0;
}