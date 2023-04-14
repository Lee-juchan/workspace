#include <stdio.h> //register variable

int main(void)
{
	int sum = 0;
	
	register int i=0; //register variable for loop
	for(i; i<500000; i++)
	{
		sum+=i;
	}
	printf("1~500000 sum: %d\n", sum);
	
	return 0;
}
