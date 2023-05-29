#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TAX_RATE 0.2

int main()
{
	const int MONTHS = 12;
	int m_salary, y_salary;

	printf("input m_salary: ");
	scanf("%d", &m_salary);

	y_salary = MONTHS * m_salary;
	printf("y_salary: %d\n", y_salary);
	printf("tax: %d\n", y_salary * TAX_RATE);

	return 0;
}