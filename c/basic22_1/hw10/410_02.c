#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_dice_face()
{
	return rand() % 6 + 1;
}

static int count = 0;
static int num1 = 0;
static int num2 = 0;
static int num3 = 0;
static int num4 = 0;
static int num5 = 0;
static int num6 = 0;

int main()
{
	while (count <= 100)
	{
		int num = get_dice_face();
		
		switch (num)
		{
			case 1:
				num1++; break;
			case 2:
				num2++; break;
			case 3:
				num3++; break;
			case 4:
				num4++; break;
			case 5:
				num5++; break;
			default:
				num6++;
		}
		count++;
	}
	printf("1 -> %d\n2 -> %d\n3 -> %d\n4 -> %d\n5 -> %d\n6 -> %d\n", num1, num2, num3, num4, num5, num6);

	return 0;
}