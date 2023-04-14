#include <stdio.h>

#define YEARS 3
#define PRODUCTS 5

int sum(int score[YEARS][PRODUCTS]);

int main()
{
	int sale[YEARS][PRODUCTS] = { {1,2,3,4,5}, {6,7,8,9,10},{11,12,13,14,15} };
	int total_sale;
	
	total_sale = sum(sale);
	printf("total sales: %d $\n", total_sale);

	return 0;
}

int sum(int score[YEARS][PRODUCTS]) //2차원 배열은 포인터로 받기 불가, 꼭 이렇게
{
	int total = 0;

	for (int y = 0; y < YEARS; y++)
	{
		for (int p = 0; p < PRODUCTS; p++)
		{
			total += score[y][p];
		}
	}

	return total;
}