#include <stdio.h> //pointer * operator _ swap

int main(void)
{
	int a = 2;
	int b = 5;
	printf("a: %d, b: %d\n", a, b); //before swap
	
	swap(&a, &b);
	printf("a: %d, b: %d\n", a, b); //after swap
	
	return 0;
}

void swap(int* pa, int* pb)
{
	int temp = 0; //temporary variable
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
