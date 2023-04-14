#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main()
{
	int grade[SIZE];
	printf("Input score of 5 students\n");
	
	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &grade[i]);
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}

	return 0;
}