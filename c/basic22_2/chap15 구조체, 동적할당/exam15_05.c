#include <stdio.h> //struct _ inputed data

typedef struct user //declaration
{
	char name[20];
	char phone[20];
	int quick;
} user;

int main(void)
{
	user ljc;
	
	printf("input name: ");
	scanf("%s", ljc.name); //& x, array name = adress
	printf("input phone number: ");
	scanf("%s", ljc.phone);
	printf("input quick number: ");
	scanf("%d", &ljc.quick); //& o, for adress
	
	printf("name: %s, phone: %s, quick: %d\n", ljc.name, ljc.phone, ljc.quick); //print data
	
	return 0;
}
