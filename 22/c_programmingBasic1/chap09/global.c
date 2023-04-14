#include <stdio.h>

int A; //global variable(전역 변수), 트래킹이 힘들다
int B;

int add()
{
	return A + B;
}

int main()
{
	int answer; //local variable(지역 변수)
	A = 5; 
	B = 7;
	answer = add();
	printf("%d + %d = %d\n", A, B, answer);

	return 0;
}