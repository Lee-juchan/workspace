#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("input integer: ");
	scanf("%d", &x);

	printf("input integer: ");
	scanf("%d", &y);

	if (x % y == 0)
	{
		printf("���\n");
	}
	else
	{
		printf("��� �ƴ�\n");
	}
}