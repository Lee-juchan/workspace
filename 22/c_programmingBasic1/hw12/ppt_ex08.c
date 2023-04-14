#include <stdio.h>

int main()
{
	int a[] = { 10, 20, 30, }; 

	printf("a = %u\n", a);
	printf("a + 1 = %u\n", a + 1); //a + 1 == &a[1]

	printf("*a = %d\n", *a);
	printf("*(a + 1) = %d\n", *(a + 1));  //*(a + 1) == a[1]

	return 0;
}