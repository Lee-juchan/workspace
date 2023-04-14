#include <stdio.h> // malloc() / dynamic - static adress
#include <stdlib.h>

int main(void)
{
	int staticAllocation = 10; //static
	int *dynamicAllocation = (int*)malloc(sizeof(int)); //dynamic
	
	printf("staic adress: %d\n", &staticAllocation); //adress of static data
	printf("dynamic adress: %d\n", dynamicAllocation); //adress of dynamic data
	
	free(dynamicAllocation);
	
	return 0;
}
