#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long fact = 1;
	int n;

	printf("input integer: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		fact *= i;
		printf("%d ", i);
		if (i == n)
		{
			break;
		}
		printf("* ");
	}
	printf("= %d\n", fact);
	return 0;
}