#include <stdio.h> //const

int main(void)
{
	char str1[5] = "ljc";
	const char str2[5] = "text"; //const
	const char *ptr; //const
	
	ptr = str1; //input adress o
	//*(ptr+2) = 'a'; //change pointed value x
	
	//str2[1] = 'a'; //change value x
	
	return 0;
}
