//23.01.28 LJC
//동적할당 _ 구조체 멤버

#include <stdio.h>
#include <stdlib.h>

struct person
{
	char *name; //포인터 -> 동적할당 
	char *phone; //
	int num;
};

int main(void)
{
	struct person p;
	p.name = (char*) malloc(sizeof(char) * 10); //동적할당 
	p.phone = (char*) malloc(sizeof(char) * 15);
	
	printf("name: ");
	scanf("%s", p.name);
	printf("phone: ");
	scanf("%s", p.phone);
	printf("num: ");
	scanf("%d", &p.num); //일반변수 &(주소)로 
	
	printf("%s %s %d\n", p.name, p.phone, p.num);
	
	return 0;
}
