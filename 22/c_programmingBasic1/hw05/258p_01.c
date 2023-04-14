#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	printf("input charactor: ");
	scanf("%c", &c);

	switch (c)
	{
		case 'ㅏ':
		case 'ㅑ':
		case 'ㅓ':
		case 'ㅕ':
		case 'ㅗ':
		case 'ㅛ':
		case 'ㅜ':
		case 'ㅠ':
		case 'ㅡ':
		case 'ㅣ':
			printf("모음"); break;
		default:
			printf("자음"); break;
	}
	return 0;
}