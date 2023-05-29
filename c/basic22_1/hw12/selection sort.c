#include <stdio.h>
#define SIZE 5

void selection_sort(int* list);

int main()
{
	int list[SIZE] = { 5,1,4,2,3 };

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");

	selection_sort(list);

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");
}

void selection_sort(int* list)
{
	for (int i = 0; i < SIZE - 1; i++)
	{
		int mindex = i;
		for (int j = i + 1; j < SIZE; j++)
		{
			if (list[j] < list[mindex])
			{
				mindex = j;
			}
		}
		//printf("%d ", list[mindex]);

		if (list[i] > list[mindex])
		{
			int temp = list[i];
			list[i] = list[mindex];
			list[mindex] = temp;
		}
	}
}