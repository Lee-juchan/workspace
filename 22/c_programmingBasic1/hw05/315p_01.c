#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	printf("initial number: ");
	scanf("%d", &n);

	for (n; n > 0; n--)
	{
		printf("%d ", n);
	}
	printf("\n\a");
}