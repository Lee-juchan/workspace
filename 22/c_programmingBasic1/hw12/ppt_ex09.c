#include <stdio.h>

int main()
{
	int a[] = { 10,20,30 };
	int* p;
	p = a; //pointer p <== array a

	printf("a[0], a[1], a[2] = %d, %d, %d\n", a[0], a[1], a[2]);
	printf("p[0], p[1], p[2] = %d, %d, %d\n", p[0], p[1], p[2]); //�����ͷ� �迭 ���

	p[0] = 1;
	p[1] = 2;
	p[2] = 3; //�����ͷ� �迭 ����

	printf("a[0], a[1], a[2] = %d, %d, %d\n", a[0], a[1], a[2]);
	printf("p[0], p[1], p[2] = %d, %d, %d\n", p[0], p[1], p[2]);
}