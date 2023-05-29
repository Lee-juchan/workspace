#include <stdio.h>

int main() // 증가 연산은 datatype 크기만큼 증가함
{
	char* pc;
	int* pi;
	short* ps;
	double* pd;

	pc = (char*)10000;
	pi = (int*)10000;
	ps = (short*)10000;
	pd = (double*)10000;

	printf("pc = %d, pi = %d, ps = %d, pd = %d\n", pc, pi, ps, pd);

	printf("++ pc = %d, pi = %d, ps = %d, pd = %d\n", ++pc, ++pi, ++ps, ++pd);
	printf("pc+2 = %d, pi+2 = %d, ps+2 = %d, pd+2 = %d\n", pc + 2, pi + 2, ps + 2, pd + 2);

	return 0;
}