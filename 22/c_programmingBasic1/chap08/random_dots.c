#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

int main()
{
	int x, y, red, green, blue;

	HDC hdc;
	hdc = GetWindowDC(GetForegroundWindow());

	srand((unsigned)time(NULL));
	for (int i = 0; i < 10000; i++)
	{
		x = rand() % 300;
		y = rand() % 300;

		red = rand() % 256;
		green = rand() % 256;
		blue = rand() % 256;

		SetPixel(hdc, x, y, RGB(red, green, blue));
	}
	_getch();
	return 0;
}