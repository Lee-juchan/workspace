#include <stdio.h>

int A; //global variable(���� ����), Ʈ��ŷ�� �����
int B;

int add()
{
	return A + B;
}

int main()
{
	int answer; //local variable(���� ����)
	A = 5; 
	B = 7;
	answer = add();
	printf("%d + %d = %d\n", A, B, answer);

	return 0;
}