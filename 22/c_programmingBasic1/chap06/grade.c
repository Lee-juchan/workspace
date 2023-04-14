#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score;

	printf("input score: ");
	scanf("%d", &score);

	if (score >= 90)
	{
		printf("Pass: grade A\n");
	}
	else if (score >= 80)
	{
		printf("Pass: grade B\n");
	}
	else if (score >= 70)
	{
		printf("Pass: grade C\n");
	}
	else
	{
		printf("Nonpass: grade D\n");
	}
	return 0;

}