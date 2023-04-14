#include <stdio.h> //struct _ shallow copy / struct assignment = all member assignment
#include <stdlib.h>
#include <string.h>

struct person
{
	char *name;
	char nation[10];
	int age;
};

int main(void)
{
	struct person a = {"NULL", "korea", 21}; //initialization  except 'name'
	struct person b;
	
	a.name = (char*)malloc(5);
	strcpy(a.name, "ljc"); //input name -> malloc, strcpy
	printf("a: %s, %s, %d\n\n", a.name, a.nation, a.age);
	
	b = a; //shallow copy
	strcpy(b.name, "lsb");	
	printf("a: %s, %s, %d\n", a.name, a.nation, a.age);
	printf("b: %s, %s, %d\n", b.name, b.nation, b.age);
	
	free(a.name);
	
	return 0;
}
