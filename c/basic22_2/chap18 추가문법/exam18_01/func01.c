//23.01.26 LJC
// ==

#include <stdio.h>

extern int data; //���� ���� �ҷ�����

void func01(void)
{
	data = 10;
	printf("call func01(): %d\n", data);
	
	data = 20;
}
