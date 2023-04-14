#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 7

void selection_sort(int* list);
int binary_search(int* list, int key);

int main()
{
	int list[SIZE] = { 1,5,6,4,7,3,2 };

	selection_sort(list);
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");

	int x;
	printf("key: ");
	scanf("%d", &x);

	binary_search(list, x);

	return 0;
}

int binary_search(int* list, int key)
{
	int si = 0;
	int ei = SIZE - 1;
	int mi = si + (int)((ei - si + 1) / 2);
	// printf("si=%d, mi=%d, ei=%d\n", si, mi, ei); 추적 테스트용

	while (si != ei) //수 범위가 1칸 남으면, si == ei == mi
	{
		if (key > list[mi])
		{
			si = mi + 1; // ei == same
			mi = si + (int)((ei - si + 1) / 2);
		}
		else if (key < list[mi])
		{
			ei = mi - 1; //si == same
			mi = si + (int)((ei - si + 1) / 2);
		}
		else //key == list[mi]
		{
			printf("key index: %d\n", mi);
			return;
		}
		// printf("si=%d, mi=%d, ei=%d\n", si, mi, ei); 추적 테스트용
	}

	if (si == ei) //수 범위가 1칸 남으면, si == ei == mi
	{
		printf("key index: %d\n", mi);
		return;
	}
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

		if (list[i] > list[mindex])
		{
			int temp = list[i];
			list[i] = list[mindex];
			list[mindex] = temp;
		}
	}
}