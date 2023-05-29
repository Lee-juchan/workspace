#include <stdio.h>

int add(int local);
int global = 10; //global variable

int main(void)
{
	printf("%d\n", global);
	printf("%d\n", add(global)); //same one
	printf("%d\n", global);
	
	return 0;
}

int add(int local)
{
	global = global + 5; // global variable (same one)
	local = local + 5;
	return local;
}
