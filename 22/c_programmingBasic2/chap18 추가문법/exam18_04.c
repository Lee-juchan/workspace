//23.01.28 LJC
//동적할당 -> 구조체 포인터

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
	char name[10];
	int year;
	int pay;
};

int main(void)
{
	struct employee *p; //구조체 포인터
	p = (struct employee*) malloc(sizeof(struct employee)); //동적 할당 -> 구조체 생성
	
	strcpy(p->name, "ljc");
	p->year = 1970; 
	p->pay = 5500;
	
	printf("name: %s\n", p->name);
	printf("year: %d\n", p->year);
	printf("pay: %d\n", p->pay);
	
	free(p);
	return 0;
}
