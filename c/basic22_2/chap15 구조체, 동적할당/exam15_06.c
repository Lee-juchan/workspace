#include <stdio.h> //struct variable _ data assignment

typedef struct user
{
	char name[20];
	char phone[15];
	int quick;
} user;

int main(void)
{
	user data1 = {"ljc", "123-456", 1}; //initialization
	user data2;
	
	printf("data1.name: %s\n", data1.name);
	printf("data2.name: %s\n\n", data2.name);
	
	data2 = data1; //assignment: d2 <-d1
	
	printf("data1.name: %s\n", data1.name);
	printf("data2.name: %s\n", data2.name);
	
	return 0;
}
