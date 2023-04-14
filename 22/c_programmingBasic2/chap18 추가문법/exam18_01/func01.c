//23.01.26 LJC
// ==

#include <stdio.h>

extern int data; //전역 변수 불러오기

void func01(void)
{
	data = 10;
	printf("call func01(): %d\n", data);
	
	data = 20;
}
