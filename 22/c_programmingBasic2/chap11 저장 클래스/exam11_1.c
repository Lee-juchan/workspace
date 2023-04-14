#include <stdio.h>

int add(int local);

int main(void)
{
	int local = 10; //local variable
	printf("%d\n", local);
	printf("%d\n", add(local));
	printf("%d\n", local);
	
	return 0;
}

int add(int local) //local variable (different one) 
{
	return local + 5;
}
