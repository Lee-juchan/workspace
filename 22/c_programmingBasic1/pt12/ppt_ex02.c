#include <stdio.h>

int main() // 포인터 == 주소 / *포인터 == 값
{
	int i = 3000;
	int* p = NULL;
	
	p = &i;

	printf("i = %d\n", i); // i 값
	printf("&i = %u\n", &i); // i 주소

	printf("p = %u\n", p); // p(포인터) 값
	printf("*p = %d\n", *p); // p(포인터) 참조 값

	return 0;
}