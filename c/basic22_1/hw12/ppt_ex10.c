#include <stdio.h>

void sub(int* p);

int main() //�迭 �����͸� �Լ� �Ű�������
{
	int a[] = { 1,2,3 };

	printf("%d %d %d\n", a[0], a[1], a[2]);
	sub(a);
	printf("%d %d %d\n", a[0], a[1], a[2]);
}

void sub(int* p)
{
	p[0] = 4;
	p[1] = 5;
	p[2] = 6;
}