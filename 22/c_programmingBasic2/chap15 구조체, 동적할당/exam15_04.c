#include <stdio.h> //struct _ declaration, initialization, assignment

typedef struct person //struct declaration
{
	char name[20];
	char phone[20];
	char adress[40];
	char email[20];
	int bell;	
} person;

int main(void)
{
	person ljc = {"leejuchan", "010-3389-6220", "경기", "juchan317@naver.com", 3}; //struct initialization
	printf("name: %s, phone: %s, adress: %s\n", ljc.name, ljc.phone, ljc.adress); //print
	
	strcpy(ljc.adress, "서울"); //struct assignment <- strcpy
	printf("name: %s, phone: %s, adress: %s\n", ljc.name, ljc.phone, ljc.adress); //print
	
	return 0;
}
