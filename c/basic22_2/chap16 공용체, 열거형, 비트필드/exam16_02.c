//23.01.26 LJC
//union _size

#include <stdio.h>

union data
{
	char c;
	int n;
};

int main(void)
{
	union data d;
	printf("size of d: %d\n", sizeof(d));
	
	d.c = 'A';
	printf("size of d.c: %d\n", sizeof(d.c));
	d.n = 10;
	printf("size of d.n: %d\n", sizeof(d.n));
	
	return 0;
}
