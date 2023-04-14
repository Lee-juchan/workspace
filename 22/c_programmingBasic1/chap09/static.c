#include <stdio.h>

void sub()
{
	static int scount = 0;
	int acount = 0;
	
	printf("scount = %d\n", scount);
	printf("acount = %d\n", acount);
	printf("--------------\n");

	scount++;
	acount++;
}

int main()
{
	sub();
	sub();
	sub();
	return 0;
}