#include <stdio.h> //1 demention array declare

int main(void)
{
	char name[] = {'L','e','e',' ','J','u','c','h','a','n'}; //char array
	
	printf("name: ");
	for(int i=0; i<10; i++)
	{
		printf("%c", name[i]); //print char
	}
	printf("\n");

	return 0;
}
