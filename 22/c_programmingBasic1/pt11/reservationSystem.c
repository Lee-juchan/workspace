#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int main()
{
	int seat[SIZE] = { 0, };
	char a1;
	int a2;

	while (1)
	{
		printf("Would you reserve the seat?\n");
		scanf("%c", &a1);

		if (a1 == 'n')
		{
			break;
		}

		printf("\n1 2 3 4 5 6 7 8 9 10\n");
		printf("---------------------\n");

		for (int i = 0; i < SIZE; i++)
		{
			printf("%d ", seat[i]);
		}
		printf("\n\n");

		printf("Which seat you want to reserve?\n");
		scanf("%d", &a2);

		if (seat[a2-1] == 0)
		{
			seat[a2-1] = 1;
			printf("Reservation complete\n\n");
		}
		else
		{
			printf("the seat is already occupied\n\n");
		}
	}
	return 0;
}