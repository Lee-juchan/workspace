#include <stdio.h> //extern variabl

void externUse(void);
int global = 10; //global variable

int main(void)
{
	printf("global: %d\n", global); //global = 10
	externUse();
	printf("global: %d\n", global); //global = 20
	
	return 0;
}
