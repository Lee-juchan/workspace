#include <stdio.h> //auto variable _ not initializated

int main(void)
{
	auto int sum; //not initializated
	
	for(int i=0; i<5; i++)
	{
		sum+=i;
	}
	printf("%d", sum);
	
	return 0;
}
