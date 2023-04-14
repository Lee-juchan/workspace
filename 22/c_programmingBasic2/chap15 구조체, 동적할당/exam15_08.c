#include <stdio.h> //struct array

typedef struct user
{
	char name[10];
	char phone[15];
	int quick;
} user;

int main(void)
{
	user data[2] = {{"ljc", "1234", 1}, {"lsb", "5678", 2}}; //struct array _ initialization
	
	for(int i=0; i<2; i++) //print
	{
		printf("name: %s\n", data[i].name);
		printf("phone: %s\n", data[i].phone);
		printf("quick: %d\n\n", data[i].quick);
	}
	
	return 0;
}
