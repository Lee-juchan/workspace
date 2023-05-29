#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, w, nw;
	
	printf("input weifht(kg) height(cm): ");
	scanf("%d %d", &w, &h);

	nw = (h - 100) * 0.9;

	if (nw > w)
	{
		printf("low weight\n");
	}
	else if (nw < w)
	{
		printf("over weight\n");
	}
	else
	{
		printf("nomal weight\n");
	}
}