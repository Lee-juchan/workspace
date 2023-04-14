#include <stdio.h>

void swap(int* px, int* py);

int main() // 결과 출력은 되는데, 실행 후 a값이 범위를 초과했다는 오류가 뜸
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