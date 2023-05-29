#include <stdio.h>
#include <stdlib.h> //malloc() _ input string

int main(void)
{
	char *string;
	int size;
	
	printf("number of charactor: ");
	scanf("%d", &size);
	
	string = (char*)malloc(size + 1); //molloc <- size + 1 (for NULL) 
	
	printf("input string, without blank: ");
	scanf("%s", string);
	
	printf("string: %s\n", string);
	
	free(string);
	
	return 0;
}
