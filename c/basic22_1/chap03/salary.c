#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ysalary;
	int msalary;

	printf("ysalary: ");
	scanf("%d", &ysalary);

	msalary = ysalary / 12;
	printf("msalary: %d", msalary);
	return 0;
}