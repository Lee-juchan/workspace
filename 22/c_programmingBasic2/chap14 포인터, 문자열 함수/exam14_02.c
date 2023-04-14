#include <stdio.h> //pointer _ value, adress

int main(void)
{
	int intValue1 = 5; //variable
	int intValue2 = 10;
	int* intPointer; //pointer variable
	
	intPointer = &intValue1; //pointing
	
	printf("intValue: %u\n", intValue1);
	printf("&intValue: %u\n", &intValue1); // adress (var) = value (point) 
	printf("intPointer: %u\n", intPointer);
	printf("*intPointer: %u\n", *intPointer); //value (var) = pointing value (point)
	printf("\n");
	
	intPointer = &intValue2; //pointing
	
	printf("intValue: %u\n", intValue2);
	printf("&intValue: %u\n", &intValue2);
	printf("intPointer: %u\n", intPointer);
	printf("*intPointer: %u\n", *intPointer);
	
	return 0;
}
