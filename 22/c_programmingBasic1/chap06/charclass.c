#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	printf("input charactor: ");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z')
	{
		printf("Upper case\n");
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("Lower case\n");
	}
	else if (ch >= '0' && ch <= '9')
	{
		printf("Number\n");
	}
	else
	{
		printf("Other charactors\n");
	}
	return 0;
}