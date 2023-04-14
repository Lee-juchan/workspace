//23.01.26 LJC
//프로젝트, 분할컴파일

#include <stdio.h>

void func01(void); //함수 원형 
int data; //전역 변수

int main(void)
{
	data = 9;
	printf("before func01(): %d\n", data);
	
	func01();
	
	printf("after func01(): %d\n", data);
	
	return 0;
}
