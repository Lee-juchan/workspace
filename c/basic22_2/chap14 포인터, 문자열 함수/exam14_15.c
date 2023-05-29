#include <stdio.h>

char *stringCopy(char *destination, const char *source);

int main(void)
{
	char string[20]; //function return _ pointer
	char *charPointer;
	
	charPointer = stringCopy(string, "my program"); //return: string -> charPointer
	
	printf("%s\n", string); //same
	printf("%s\n", charPointer);
	
	return 0;
}
char *stringCopy(char *destination, const char *source) //source is nonchangable
{
	char *p = destination; //array name = constant, operating impossible
	while(*source) //until *source == NULL
	{
		*p++ = *source++;
	}
	*p = NULL;
	
	return destination; //return pointer 
}
