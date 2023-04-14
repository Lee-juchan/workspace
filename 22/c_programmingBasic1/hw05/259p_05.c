#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int height, ages;
	printf("input height(cm): ");
	scanf("%d", &height);

	printf("input ages: ");
	scanf("%d", &ages);

	if (height>=140 && ages >= 10)
	{
		printf("OK\n");
	}
	else
	{
		printf("NO\n");
	}
}