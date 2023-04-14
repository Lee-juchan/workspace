#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int salary, deposit;

	printf("input salary: ");
	scanf("%d", &salary);

	deposit = 12 * 10 * salary;
	printf("10years deposit: %d\n", deposit);

	return 0;
}