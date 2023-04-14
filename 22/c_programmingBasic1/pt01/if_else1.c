#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("input number: ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("Â¦¼ö\n");
	}
	else
	{
		printf("È¦¼ö\n");
	}

	return 0;
}