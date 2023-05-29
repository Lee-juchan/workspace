#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int hex;
	printf("input hexadecimal digit; ");
	scanf("%x", &hex);

	printf("Octal digit: %#o\n", hex);
	printf("Decimal digit: %d\n", hex);
	printf("Hexadecimal digit: %#x\n", hex);
	return 0;
}