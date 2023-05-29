#include <stdio.h> //printf random numbers
#include <time.h> //time() for seed
#include <stdlib.h> //rand()

int main(void)
{
	srand(time(NULL)); //seed setting
	for(int randNumCount=0; randNumCount<5; randNumCount++) //repeat
	{
		printf("%d\n", rand()); //print random number
	}
	
	return 0;
}
