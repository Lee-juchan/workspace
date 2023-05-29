#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month, days;

	printf("input month you want to know: ");
	scanf("%d", &month);

	switch (month)
	{
		case 2: 
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = 31;
			break;
	}
	
	printf("days of %d¿ù: %dÀÏ\n", month, days);

	return 0;
}