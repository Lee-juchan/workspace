#include <stdio.h>

int get_linear_function(int x1, int y1, int x2, int y2, float* slope, float* yintercept);

int main()
{
	float s, y;
	if (get_linear_function(3, 3, 6, 6, &s, &y) == 1)
	{
		printf("error\n");
	}
	else
	{
		printf("slope: %f, y_intercept: %f\n", s, y);
	}
	return 0;
}

int get_linear_function(int x1, int y1, int x2, int y2, float* slope, float* yintercept)
{
	if (x1 == x2)
	{
		return 1;
	}
	else
	{
		*slope = (float)(y2 - y1) / (x2 - x1);
		*yintercept = y1 - *slope * x1;
		
		return 0;
	}
}