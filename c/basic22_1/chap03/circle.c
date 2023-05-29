#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float radius;
	float area;

	printf("radius: ");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;
	printf("area: %f", area);
	return 0;
}