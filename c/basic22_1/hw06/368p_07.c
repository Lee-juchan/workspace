#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_tax(int income);

int main()
{
	int income;
	printf("intput income: ");
	scanf("%d", &income);

	printf("tax: %d\n", get_tax(income));
	return 0;
}

int get_tax(int income)
{
	int tax;

	if (income <= 1000)
	{
		tax = income * 0.08;
	}
	else
	{
		int uincome, dincome;
		dincome = 1000;
		uincome = income - dincome;

		tax = dincome * 0.08 + uincome * 0.1;
	}
	return tax;
}