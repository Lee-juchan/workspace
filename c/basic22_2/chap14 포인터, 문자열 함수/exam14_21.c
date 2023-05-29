#include <stdio.h> //string library _ strcpy(), strncpy(), strlen() / string copy, length
#include <string.h>

int main(void)
{
	char s[20]; //pointer unavailable
	char *str1 = "abcde";
	char *str2 = "ABCDE";
	
	strcpy(s, str1); //strcpy: s <- str1
	printf("string: %s\n", s);
	
	strncpy(s, str2, 3); //strncpy: s <- str2 (3 charactor)
	printf("string: %s\n", s);
	printf("length of s: %d\n\n", strlen(s)); //print length
	
	s[3] = '\0'; //input NULL
	printf("string: %s\n", s); //printed before NULL
	printf("length of s: %d\n", strlen(s)); //length before NULL
	
	return 0;
}
