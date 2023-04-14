#include <stdio.h> // auto & static compare

int main(void)
{
	for(int i=0; i<5; i++) //repeat 5 times
	{
		count();
	}
	
	return 0;
}

void count(int num)
{
	int autoCount = 0; //auto variable
	static int staticCount = 0; //static variable
	
	autoCount++; //1 1 1 1 1
	staticCount++; //1 2 3 4 5
	
	printf("auto: %d\tstatic: %d\n", autoCount, staticCount); //print result
}
