#include <stdio.h>

void swap(int* px, int* py);

int main() // ��� ����� �Ǵµ�, ���� �� a���� ������ �ʰ��ߴٴ� ������ ��
{
	int a = 10;
	int b = 20;

	printf("a = %d, b = %d\n", a, b);

	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int* px, int* py)
{
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;
}