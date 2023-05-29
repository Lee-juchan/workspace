#include <stdio.h> //print ranged random number 
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL)); //seed
	for(int randNumCount=0; randNumCount<5; randNumCount++)
	{
		printf("%d\n", rand()%100 + 1); //print 1~100
	}
	
	printf("\n");
	
	for(int randNumCount=0; randNumCount<5; randNumCount++)
	{
		printf("%f\n", rand()/32768.); //print 0~1 /. is essential
	}
	
	return 0;
}
