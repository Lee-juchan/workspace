#include <stdio.h>

void plusref(int* a);
int plusval(int a);

int main()
{
	//callby_value
	int y, result;
	y = 10;

	result = plusval(y); //y�� ���� ���� ���� (������ ���� �ٲ�)
	printf("y = %d, result = %d\n", y, result); //y���� ��� ����


	// callby_referance
	int x;
	x = 10;

	plusref(&x); //x��ü�� ���� (x�� �ٲ�)
	printf("result = %d\n", x); //x�� �׳� ���
	
	return 0;
}

void plusref(int* a)
{
	*a = *a + 1;
}

int plusval(int a)
{
	return a = a + 1;
}