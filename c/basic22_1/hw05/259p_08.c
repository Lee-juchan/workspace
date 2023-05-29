#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time, age;
	printf("input time, age: ");
	scanf("%d %d", &time, &age);

	if (time <= 17)
	{
		if (age <= 12 || age >= 65)
		{
			printf("fare: 25,000\n");
		}
		else
		{
			printf("fare: 34,000\n");
		}
	}
	else
	{
		printf("fare: 10,000\n");
	}
}