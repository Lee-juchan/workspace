#include <stdio.h>

int main() //������ == �ּ�
{
	int i = 10;
	double f = 12.3;

	int* pi = NULL;
	double* pd = NULL;

	pi = &i;
	pd = &f;

	printf("%u %u\n", pi, &i);
	printf("%u %u\n", pd, &f);

	return 0;
}