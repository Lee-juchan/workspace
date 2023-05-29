#include <stdio.h> //pointer-variable same datatype

int main(void)
{
	char c[5] = "copy";
	char* cp;
	cp = c;
	
	printf("%c\n", *cp);
	
	cp++;
	printf("%c\n", *cp);
	
	cp+=2;
	printf("%c\n", *cp);
	
	return 0;
}
