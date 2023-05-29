#include <stdio.h> //function pointer

int add(int x, int y);

int main(void)
{
	int (*funcPointer)(int a, int b); //function pointer / normal pointer x
	funcPointer = add; //pointing at add
	
	printf("result: %d\n", add(1,2)); //print -> same result
	printf("result: %d\n", funcPointer(1,2));
	
	return 0;
}

int add(int x, int y) //add function
{
	return x + y;
}
