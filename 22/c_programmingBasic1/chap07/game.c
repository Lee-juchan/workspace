#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int answer = 58;
	int guess;
	int tries = 0;

	do
	{
		printf("guess num: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
		{
			printf("down!\n");
		}
		if (guess < answer)
		{
			printf("up!\n");
		}
		
	} while (guess != answer);

	printf("That's Right!\ntries: %d", tries);
	return 0;
	

	
}