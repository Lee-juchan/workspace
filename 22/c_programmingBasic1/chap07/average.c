#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int grade = 0;
	int sum = 0;
	int n = 0;
	float average;

	printf("input negative num, for End\n");
	
	while (grade >= 0)
	{
		printf("input score: ");
		scanf("%d", &grade);
		sum += grade;
		n++;
	}
	sum = sum - grade;
	n--;

	average = (float) sum / n;

	printf("average: %f\n", average);
	return 0;

	
}