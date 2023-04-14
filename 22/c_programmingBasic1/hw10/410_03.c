#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

static int count = 0;

int check(int num)
{
	if (num == 1234)
		return 1;
	else
		return 0;
}

int main()
{
	int num, result;
	while (1)
	{
		printf("input pass: ");
		scanf("%d", &num);
		count++;

		result = check(num);
		if (result == 1)
		{
			printf("login success\n");
			break;
		}
		if (count >= 3)
		{
			printf("login times over\n");
			break;
		}
	}
	


}