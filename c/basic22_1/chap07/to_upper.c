#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char letter;

	while (1)
	{
		printf("input a lowwer case: ");
		scanf("%c", &letter);

		if (letter == 'Q')
		{
			break;
		}
		if (letter < 'a' || letter>'z')
		{
			continue;
		}
		letter -= 32;
		printf("converted upper case: %c\n", letter);
	}
	return 0;
}