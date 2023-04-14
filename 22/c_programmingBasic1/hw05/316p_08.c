#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int length;

	while (1)
	{
		printf("input length of bar(1~50): ");
		scanf("%d", &length);

		if (length < 1 || length>50)
		{
			break;
		}

		for (int i = 0; i < length; i++)
		{
			printf("*");
		}
		printf("\n");
	}
}