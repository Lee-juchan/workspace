#include <stdio.h> //struct array

struct person
{
	char *name;
	char *nation;
	int age;
};

int main(void)
{
	struct person data[3] = { {"ljc", "kor", 21}, {"lsb", "eng", 22}, {"bob", "us", 30}}; //struct array
	
	for(int i=0; i<3; i++)
	{
		printf("%s: %s, %d\n", data[i].name, data[i].nation, data[i].age);
	}
	
	return 0;
}
