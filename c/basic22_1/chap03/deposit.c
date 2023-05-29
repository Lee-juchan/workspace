#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int salary;
	int deposit;

	printf("salary: ");
	scanf("%d", &salary);

	deposit = 10 * 12 * salary;
	printf("10years deposit: %d", deposit);
	return 0;
}