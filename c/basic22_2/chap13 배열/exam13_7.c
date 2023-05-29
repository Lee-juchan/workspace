#include <stdio.h> //input = gets() -> blank o / output =  puts() 
#include <ctype.h>

int main(void)
{
	char nameEn[10];
	printf("input EN name: "); //input name  by gets()
	gets(nameEn);
	
	puts("EN name: "); //print name  by puts() 
	puts(nameEn);
	return 0;
}
