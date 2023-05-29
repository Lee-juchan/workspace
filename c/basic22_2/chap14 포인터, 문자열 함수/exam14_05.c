#include <stdio.h> //array pointer

int main(void)
{
	int arr[3] = {10, 20, 30}; //array
	int* arrPointer; //pointer
	
	arrPointer = arr; //pointing
	
	printf("arrPointer: %u\n", arrPointer);
	printf("arr: %u\n", arr); // array name = &arr[0] = adress
	printf("&arr[0]: %u\n", &arr[0]);
	
	printf("&arr[1]: %u\n", &arr[1]); //int array _ 4byte per index
	printf("&arr[2]: %u\n", &arr[2]);
	
	printf("arr[0]: %d\n", arr[0]); //arr[0] = *arrPointer
	printf("*arrPointer: %d\n", *arrPointer);
	
	return 0;
}
