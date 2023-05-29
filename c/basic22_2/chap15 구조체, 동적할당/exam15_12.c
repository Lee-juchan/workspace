#include <stdio.h> //struct member _ pointer _ " ", malloc -> strcpy
#include <stdlib.h>
#include <string.h>

struct person
{
	char *name;
	int age;
};

int main(void)
{
	struct person men, *menptr;
	
	menptr = &men;
	
	menptr->name = "lee juchan"; //input data _ " "
	puts(menptr->name);
	
	menptr = (struct person*)malloc(sizeof(struct person)); //input data _ malloc() -> strcpy
	strcpy(menptr->name, "lee sebin");
	puts(menptr->name);
	
	free(menptr);
	
	return 0;
}
