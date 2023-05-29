#include <stdio.h> // sum() function

int sum(int num1, int num2); //function prototype

int main(void)
{
	int n1 = 2;
	int n2 = 8;
	printf("n1 + n2 = %d", sum(n1, n2)); //function call
	
	return 0;
}

int sum(int num1, int num2) //function define
{
	return num1 + num2;
}
