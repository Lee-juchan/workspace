#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int comrsp = rand() % 3 + 1;
	 
	int myrsp;
	printf("rock = 1 / scissor = 2 / paper = 3");
	scanf("%d", myrsp);

	if (comrsp == 1)
	{
		switch (myrsp)
		{
			case 1:
				printf("draw"); break;
			case 2:
				printf("win"); break;
			case 3:
				printf("lose"); break;
		}
	}
	else if (comrsp == 2)
	{
		switch (myrsp)
		{
		case 2:
			printf("draw"); break;
		case 3:
			printf("win"); break;
		case 1:
			printf("lose"); break;
		}
	}
	else if (comrsp == 3)
	{
		switch (myrsp)
		{
		case 3:
			printf("draw"); break;
		case 1:
			printf("win"); break;
		case 2:
			printf("lose"); break;
		}
	}
	else
	{
		printf("error");
	}
}