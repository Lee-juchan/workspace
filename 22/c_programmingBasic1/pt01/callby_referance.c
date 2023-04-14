#include <stdio.h>

void plusref(int* a);
int plusval(int a);

int main()
{
	//callby_value
	int y, result;
	y = 10;

	result = plusval(y); //y가 가진 값에 접근 (가상의 값만 바꿈)
	printf("y = %d, result = %d\n", y, result); //y따로 결과 따로


	// callby_referance
	int x;
	x = 10;

	plusref(&x); //x자체에 접근 (x를 바꿈)
	printf("result = %d\n", x); //x가 그냥 결과
	
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