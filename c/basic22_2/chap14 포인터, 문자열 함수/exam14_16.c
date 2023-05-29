#include <stdio.h> // string library _ malloc(), free()
#include <stdlib.h>

int main(void)
{
	char *string;
	string = (char *)malloc(20); //string <- 20byte allocation
	
	printf("input string: "); //input string
	scanf("%s", string);
	
	printf("string: %s\n", string); //print string
	
	free(string); //free
	
	return 0;
}
