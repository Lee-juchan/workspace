#include <stdio.h>

int main() // ������ == �ּ� / *������ == ��
{
	int i = 3000;
	int* p = NULL;
	
	p = &i;

	printf("i = %d\n", i); // i ��
	printf("&i = %u\n", &i); // i �ּ�

	printf("p = %u\n", p); // p(������) ��
	printf("*p = %d\n", *p); // p(������) ���� ��

	return 0;
}