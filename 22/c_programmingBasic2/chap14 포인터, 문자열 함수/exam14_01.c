#include <stdio.h> // memory adress

int main(void)
{
	char c = 1; //variable
	int i = 3;
	double d = 5;
	
	printf("adress of c: %u\n", &c); //print adress
	printf("adress of i: %u\n", &i);
	printf("adress of d: %u\n", &d);
	
	return 0;
}
