//23.01.26 LJC
//������Ʈ, ����������

#include <stdio.h>

void func01(void); //�Լ� ���� 
int data; //���� ����

int main(void)
{
	data = 9;
	printf("before func01(): %d\n", data);
	
	func01();
	
	printf("after func01(): %d\n", data);
	
	return 0;
}
