#include <stdio.h> //local & global static variable

void count(void);
static int globalStaticCount = 0; //global static variable

int main(void)
{
	printf("static\n");
	for(int i=0; i<5; i++)
	{
		count(); //call (local, global static +1)
		globalStaticCount++; //global static +1
	}
}

void count(void)
{
	static int localStaticCount = 0; //local static variable
	
	localStaticCount++; //local static +1
	globalStaticCount++; //global static +1
	printf("local: %d\tglobal: %d\n", localStaticCount, globalStaticCount); //print value
}
