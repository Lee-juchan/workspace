//23.01.28 LJC
//�����Ҵ� -> ����ü ������

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
	struct employee *p; //����ü ������
	p = (struct employee*) malloc(sizeof(struct employee)); //���� �Ҵ� -> ����ü ����
	
	strcpy(p->name, "ljc");
	p->year = 1970; 
	p->pay = 5500;
	
	printf("name: %s\n", p->name);
	printf("year: %d\n", p->year);
	printf("pay: %d\n", p->pay);
	
	free(p);
	return 0;
}
