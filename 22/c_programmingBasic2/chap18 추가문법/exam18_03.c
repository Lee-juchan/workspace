//23.01.28 LJC
//�����Ҵ� _ ����ü ���

#include <stdio.h>
#include <stdlib.h>

struct person
{
	char *name; //������ -> �����Ҵ� 
	char *phone; //
	int num;
};

int main(void)
{
	struct person p;
	p.name = (char*) malloc(sizeof(char) * 10); //�����Ҵ� 
	p.phone = (char*) malloc(sizeof(char) * 15);
	
	printf("name: ");
	scanf("%s", p.name);
	printf("phone: ");
	scanf("%s", p.phone);
	printf("num: ");
	scanf("%d", &p.num); //�Ϲݺ��� &(�ּ�)�� 
	
	printf("%s %s %d\n", p.name, p.phone, p.num);
	
	return 0;
}
