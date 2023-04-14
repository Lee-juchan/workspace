#include <stdio.h>

int main()
{
	int grade[] = { 1,2,3,4,5,6 };
	
	int size = sizeof(grade) / sizeof(grade[0]);
	printf("%d\n\n", size);

	for (int i = 0; i < size; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}
}