#include <stdio.h> //pointer operating

int main(void)
{
	int arr[3] = {10, 20, 30}; //array
	int* arrp; //pointer
	
	arrp = arr; //pointing
	
	printf("arr: %u\n\n", arr); //arr = arr+0 = &arr[0] == arrp = arrp+0
	
	printf("&arr[1]: %u\n", &arr[1]); //arr+1 = &arr[1] == arrp+1
	printf("arr+1: %u\n", arr+1);
	printf("arrp+1: %u\n\n", arrp+1);
	
	printf("arr[2]: %u\n", arr[2]); //arr[2] = *(arr+2) == *(arrp+2)
	printf("*(arr+2): %u\n", *(arr+2));
	printf("*(arrp+2): %u\n", *(arrp+2));
	
	return 0;
}
