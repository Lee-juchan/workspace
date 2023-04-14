#include <stdio.h> //input array data  with scanf()
#include <ctype.h>

int main(void)
{
	char name[10]; //char array
	for(int i=0; i<10; i++)
	{
		printf("input %dth character: ", i+1); //input name 
		fflush(stdin); //??????????
		scanf("%c", &name[i]);
	}
	
	printf("\nname: "); //print name in upper
	for(int i=0; i<10; i++)
	{
		printf("%c", toupper(name[i]));
	}	
	return 0;
}
