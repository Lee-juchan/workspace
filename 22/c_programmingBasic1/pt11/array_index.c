#include <stdio.h>

int main()
{
	int grade[5];

	grade[0] = 10;
	grade[1] = 20;
	grade[2] = 30;
	grade[3] = 40;
	grade[4] = 50;
	// grade[5] = 60; over index range

	for (int i = 0; i <= 5; i++)
		printf("grade[%d] = %d\n", i, grade[i]);

	return 0;
}