#include <stdio.h> //string library _ strcat(), strncat() / string concatenation
#include <string.h>

int main(void)
{
	char str1[20] = "lee";
	char str2[10] = "juchan";
	char *p;
	
	p = strcat(str1, str2); //str1 <- str1 + str2
	printf("str concatenation: %s\n", str1);
	
	strncat(str1, str2, 3);
	printf("str concatenation: %s\n", str1);
	
	return 0;
}
