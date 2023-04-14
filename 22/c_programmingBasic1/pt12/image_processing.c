#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEIGHT 5
#define WIDTH 10

void print_image(int image[HEIGHT][WIDTH]);
void reverse_image(int image[HEIGHT][WIDTH]);
void random_image(int image[HEIGHT][WIDTH]);

int main()
{
	int image[HEIGHT][WIDTH] = {
		{0,0,1,1,0,0,1,1,0,0},
		{0,1,0,0,1,1,0,0,1,0},
		{0,1,0,0,0,0,0,0,1,0},
		{0,0,1,0,0,0,0,1,0,0},
		{0,0,0,0,1,1,0,0,0,0}
	};

	print_image(image); // ��Ʈ �׸� ��ȯ
	reverse_image(image);
	printf("\n\n");
	print_image(image);
	printf("\n\n");

	int immage[HEIGHT][WIDTH] = { 0, }; // ���� �׸� ����
	print_image(immage);
	random_image(immage);
	printf("\n\n");
	print_image(immage);
}

void print_image(int image[HEIGHT][WIDTH])
{
	for (int h = 0; h < HEIGHT; h++)
	{
		for (int w = 0; w < WIDTH; w++)
		{
			if (image[h][w] == 0)
			{
				printf(". ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}

void reverse_image(int image[HEIGHT][WIDTH])
{
	for (int h = 0; h < HEIGHT; h++)
	{
		for (int w = 0; w < WIDTH; w++)
		{
			image[h][w] = (image[h][w] + 1) % 2;
		}
	}
}

void random_image(int image[HEIGHT][WIDTH])
{
	srand(time(NULL));

	for (int h = 0; h < HEIGHT; h++)
	{
		for (int w = 0; w < WIDTH; w++)
		{
			image[h][w] = rand() % 2;
		}
	}
}