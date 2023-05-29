#include <stdio.h>

#define LOW 5
#define COL 5

void print_image(int image[LOW][COL]);
void brighten_image(int image[LOW][COL], int value);

int main()
{
	int image[LOW][COL] = {
		{ 10, 20, 30, 40, 50 },
		{ 10, 20, 30, 40, 50 },
		{ 10, 20, 30, 40, 50 },
		{ 10, 20, 30, 40, 50 },
		{ 10, 20, 30, 40, 50 }};

	print_image(image);

	brighten_image(image, 10);
	printf("\n");

	print_image(image);
}

void print_image(int image[LOW][COL])
{
	for (int l = 0; l < LOW; l++)
	{
		for (int c = 0; c < COL; c++)
		{
			printf("%d ", image[l][c]);
		}
		printf("\n");
	}
}

void brighten_image(int image[LOW][COL], int value)
{
	for (int l = 0; l < LOW; l++)
	{
		for (int c = 0; c < COL; c++)
		{
			image[l][c] += value;
		}
	}
}