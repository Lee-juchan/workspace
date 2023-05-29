#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define START_DAY 3
#define DAYS_OF_MONTH 31

int main(void)
{
	int day, date;

	printf("=================================\n");
	printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
	printf("=================================\n\n");

	for (day = 0; day < START_DAY; day++)
	{
		printf("     "); // 1일 시작까지는 공백
	} 

	for (date = 1; date <= DAYS_OF_MONTH; date++)
	{
		if (day == 7)
		{
			printf("\n\n");
			day = 0;
		}

		printf("%2d   ", date);
		day++;
	}
	printf("\n\n");
	return 0;
}