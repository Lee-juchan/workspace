#include <stdio.h> //pointer _ indirect operator *

int main(void)
{
	int a = 5;
	int b = 10;
	int* intPointer;
	
	intPointer = &a; //pointing a
	printf("a: %d\n", a);
	printf("*intPointer: %d\n\n", *intPointer);
	
	*intPointer = b; //a = ba
	
	printf("a: %d\n", a);
	printf("*intPointer: %d\n", *intPointer);
	
	return 0;
}
