#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void get_random(int n) //n�� ���� ���
{
	printf("input integer: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("%6d\n", rand());
	}
}

int main()
{
	srand((unsigned)time(NULL)); // seed�� ����ð����� ����
	get_random(10);

	return 0;
}